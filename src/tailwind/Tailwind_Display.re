type t =
  | Block
  | InlineBlock
  | Inline
  | Table
  | TableRow
  | TableCell
  | Hidden
  | Flex
  | InlineFlex;

let toClassName =
  fun
  | Block => "block"
  | InlineBlock => "inline-block"
  | Inline => "inline"
  | Table => "table"
  | TableRow => "table-row"
  | TableCell => "table-cell"
  | Hidden => "hidden"
  | Flex => "flex"
  | InlineFlex => "inline-flex";
