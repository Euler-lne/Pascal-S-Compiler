program main;
var g, i: integer;

function func(n: integer): integer;
begin
  g := g + n;
  write(g);
  func := g;
end;

begin
  i := 11;
  if (i > 10) and (func(i,3) <> 0) then // 多参数
    i := 1
  else
    i := 0;
  write(i);
  i := 10;
  if (i > 11) and (func(i) <> 0) then
    j := 1 // 未定义
  else
    i := 0;
  write(i);
  i := 100;
  if (i <= 99) or (func(1.2) <> 0) then // 类型不一致
    i := 1
  else
    i := 0;
  write(i);
  i := 99;
  if (i <= 100) or (func(i) < 't') then // 类型不一致
    i := 1
  else
    i := 0;
  if (func(99) = 0) and (func(100) <> 0) then
    i := 1
  else
    i := 0;
end.
