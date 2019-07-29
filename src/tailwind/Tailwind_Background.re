module Color = {
  type t = [ | `Transparent | `Solid(Tailwind_Color.t)];

  let toClassName =
    fun
    | `Transparent => "bg-transparent"
    | `Solid(c) => "bg-" ++ Tailwind_Color.toClassName(c);
};
