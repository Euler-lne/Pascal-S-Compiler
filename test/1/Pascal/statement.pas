program TestFlowControl(input, output);
var
  n: integer;
  m: boolean;
  ch: char;
begin
  n := 3;
  m := true;
  ch := 'c';

  write('if .. then .. else');
  if not m then write('n <= 0')
  else 
    if n >= 5 then 
    begin
      n := n - 1;
      write('n >= 5')
    end
    else 
    begin
      n := n + 1;
      write('n < 5')
    end;

  write('while .. do');
  n := 1;
  while n <= 3 do
  begin
    write(n);
    n := n + 1;
  end;

  write('repeat .. until');
  n := 1;
  repeat
    write(n);
    n := n + 1;
  until n = 3;

  write('for .. to/downto .. do');
  for n := 3 downto 1 do
    write(n);
  for n := 1 to 3 do
    write(n);
end.