using System;
using AutoN;

public class AutoEventArgs : EventArgs {
  public Auto Auto { get; }

  public AutoEventArgs(Auto auto) {
    Auto = auto;
  }
}