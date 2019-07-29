module Color = Tailwind_Color;

module Background = Tailwind_Background;

type t = [ | `BackgroundColor(Background.Color.t)];

let toClassName =
  fun
  | `BackgroundColor(bg) => Background.Color.toClassName(bg);

// let tw = [
//   `BackgroundColor(`Transparent),
//   `BackgroundColor(`Solid(Color.White)),
// ];

// let classNames = List.map(toClassName, tw);
