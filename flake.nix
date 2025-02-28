{
  description = "A Flake to our development software.";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
  };

  outputs = { self, nixpkgs }: 
  let 
    system = "x86_64-linux";
    pkgs = nixpkgs.legacyPackages.${system};

    # Backend dependencies (Python + FastAPI + OpenAI SDK)
    softwareDeps = with pkgs; [
        pkgs.lingua_franca
        pkgs.freecad
    ];

  in {
    devShells = {
      "${system}" = {
        default = pkgs.mkShell {
          buildInputs = softwareDeps;
        };
      };
    };
  };
}
