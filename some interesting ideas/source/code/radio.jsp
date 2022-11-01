<!-- radio.jsp-->
<%@ page contentType="text/html;charset="utf-8"%>
<html>
<head>
<title>单选框</title>
<meta http-equiv="Content-Type" content="text/html charset=utf-8">
</head>
<body bgcolor="#FFFFFF" text="#000000">
<%
    String str;
    str=request.getParameter("radiobutton");  
    str=new String(str.getBytes("ISO-8859-1"),"utf-8"); 
    out.println("成绩等级："+str);
%>
</body>
</html>