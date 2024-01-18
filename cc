<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>G3 Architects</title>
    <link rel="stylesheet" href="styles/style.css">
</head>
<body>
    <header>
        <nav class="nav-title">
            <h3 class="section-title">G3 Architects</h3>
            <ul>
                <li><a href="">Home</a></li>
                <li><a href="">About</a></li>
                <li><a href="">Contact</a></li>
                <li><a href="">Login</a></li>
            </ul>
        </nav>
        <div class="banner">
           <div class="banner-content">
            <h1 class="banner-title">
                Brand New Group of Architects 
            </h1>
            <p class="text-light-gray">There are many variations of passages of Lorem Ipsum available, but the majority have suffered alteration in some form, by injected humour, or randomised words which don't look even</p>
            <button class="btn-primary">Explore More</button>
           </div>
            <img src="images/banner.png" alt="">
        </div>
    </header>
    <main>
        <section class="teams-container ">
            <div class="teams-img-container ">
                <img src="images/team1.png" alt="">
                <img src="images/team2.png" alt="">
                <img src="images/team3.png" alt="">
                <img src="images/team4.png" alt="">
            </div>
            <div class="teams-content">
                <h3 class="teams-title">
                    <span class="quick-list text-light-gray">Quick list</span> <span>of Our</span> <span class="text-features">Features</span>
                </h3>
                <p class="text-light-gray">
                    There are many variations of passages of Lorem Ipsum available, but the majority have suffered alteration in some form, by injected humour, or randomised words which don't look even
                </p>
                <button class="btn-primary">Explore More</button>
            </div>
        </section>
    </main>
    <footer></footer>

</body>
</html>


@import url('https://fonts.googleapis.com/css2?family=Work+Sans:wght@400;500;600;700;800&display=swap');

* {
    font-family: 'Work Sans', sans-serif;
}

.btn-primary {
    border-radius: 8px;
    color: #fff;
    font-size: 1.25rem;
    background: #FF900E;
    padding: 20px 25px;
    cursor: pointer;
    border: 0;
}

.text-light-gray {
    color: #727272;
}

header {
    background: rgba(255, 144, 14, 0.10);
    padding: 50px 240px;

}

nav {
    display: flex;
    justify-content: space-between;
    align-items: center;
}

.nav-title {
    font-size: 2.8rem;
    font-weight: 700;
    color: #131313;
}

nav>ul {
    display: flex;
}

nav li {
    list-style: none;
    margin-right: 30px;
    font-size: 1rem;
    font-weight: 500;

}

nav li a {
    text-decoration: none;
    color: #424242;
}

.banner-content {
    max-width: 800px;
    text-align: center;
    margin: 0 auto;
}

.banner-title {
    font-size: 4rem;
    font-weight: 700;
    color: #131313;
}

.banner img {
    margin-top: 20px;
    width: 100%;
}

main {
    width: 1440px;
    margin: 70px auto;
}

.teams-container {
    display: flex;
    align-items: center;
    
    
}

.teams-img-container {
    display: grid;
    grid-template-columns: repeat(2, 1fr);
    gap: 1.5rem;
}

.teams-content {
    padding-left: 70px;
    padding-right: 70px;
    
}

.teams-title {
    font-size: 2.8rem;
}

.teams-title .quick-list {
    font-weight: 500;
}

.teams-title .text-features {
    color: #FF900E;
    font-weight: 700px;

}









@media screen and (max-width: 576px) {
    header {
        padding: 20px;
    }
   

    nav,
    .teams-container
    {
        flex-direction: column;
    }
    .teams-img-container {
        grid-template-columns: 1fr;
    }
}



@media screen and (min-width: 576px) and (max-width:960px) {
    nav,
    .teams-container
     {
        flex-direction: column;
    }

    header {
        padding: 50px;
    }
}