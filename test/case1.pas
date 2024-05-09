program CaseExample;

var
    choice: char;

begin
    writeln('请选择一个选项（A、B、C）：');
    readln(choice);

    case choice of
        'A': writeln('你选择了选项 A');
        'B': writeln('你选择了选项 B');
        'C': writeln('你选择了选项 C');
    else
        writeln('无效的选项');
    end;

    readln;
end.
