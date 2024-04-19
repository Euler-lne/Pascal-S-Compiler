program ForLoopExample3;
var
  i, j: integer;
begin
  for i := 1 to 9 do
  begin
    for j := 1 to i do
    begin
      write(j, ' * ', i, ' = ', i * j, '   '); {输出乘法表的一项}
    end;
    write; {换行}
  end;
end.

