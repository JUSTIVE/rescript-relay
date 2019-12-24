/** This file is autogenerated by ReasonRelay and should not be modified manually. */
/**
 * ENUMS
 * Helpers for wrapping/unwrapping enums.
 */
module Enum_OnlineStatus: {
  type t = [ | `Online | `Idle | `Offline | `FUTURE_ADDED_VALUE__];
  type wrapped;
  let unwrap: wrapped => t;
  let wrap: t => wrapped;
} = {
  type t = [ | `Online | `Idle | `Offline | `FUTURE_ADDED_VALUE__];
  type wrapped;

  external __unwrap: wrapped => string = "%identity";
  external __wrap: string => wrapped = "%identity";

  let unwrap = wrapped =>
    switch (wrapped |> __unwrap) {
    | "Online" => `Online
    | "Idle" => `Idle
    | "Offline" => `Offline
    | _ => `FUTURE_ADDED_VALUE__
    };

  let wrap = t =>
    (
      switch (t) {
      | `Online => "Online"
      | `Idle => "Idle"
      | `Offline => "Offline"
      | `FUTURE_ADDED_VALUE__ => ""
      }
    )
    |> __wrap;
};
