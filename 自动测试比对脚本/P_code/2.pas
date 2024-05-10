// P_code/with_input.pas
program WithInput;
var
    name: string;
begin
    write('Please enter your name: ');
    read(name);
    write('Hello, ', name, '!');
end.