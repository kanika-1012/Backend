import express from "express";
const app = express();
const port = 3000;
app.get("/", (req, res) =>{
    res.send("HELLO !!");
});
app.get("/contact", (req, res) =>{
    res.send("<h1> Comtact Me </h1> <p> Phone: 77766r76r76r</p>");
});
app.get("/about", (req, res) =>{
    res.send("<h1> About Me</h1> <p> My name is Kanika</p>");
});
app.listen(port , ()=> {
    console.log(`server started on port ${port}`);
});