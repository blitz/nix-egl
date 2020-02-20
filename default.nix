{ sources ? import ./nix/sources.nix
, nixpkgs ? sources.nixpkgs
, pkgs ? import nixpkgs {}}:
pkgs.stdenv.mkDerivation {
  pname = "egl-test";
  version = "0.0.0";

  src = ./.;

  nativeBuildInputs = [ pkgs.cmake pkgs.ninja ];
  buildInputs = [ pkgs.xorg.libX11 pkgs.libGL ];
}
