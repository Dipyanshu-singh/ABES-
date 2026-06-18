import "./App.css";

const CATEGORY_CARDS = [
  {
    id: 1,
    title: "Pick up where you left off",
    type: "multi",
    linkText: "See more",
    items: [
      { name: "Men's T-Shirts", image: "https://images.unsplash.com/photo-1521572163474-6864f9cf17ab?w=300&q=80" },
      { name: "Casual Shoes", image: "https://images.unsplash.com/photo-1542291026-7eec264c27ff?w=300&q=80" },
      { name: "Watches", image: "https://images.unsplash.com/photo-1523275335684-37898b6baf30?w=300&q=80" },
      { name: "Sunglasses", image: "https://images.unsplash.com/photo-1572635196237-14b3f281503f?w=300&q=80" },
    ],
  },
  {
    id: 2,
    title: "Mobiles & Accessories",
    type: "multi",
    linkText: "See all offers",
    items: [
      { name: "Smartphones", image: "https://images.unsplash.com/photo-1511707171634-5f897ff02aa9?w=300&q=80" },
      { name: "Phone Cases", image: "https://images.unsplash.com/photo-1601593346740-925612772716?w=300&q=80" },
      { name: "Chargers", image: "https://images.unsplash.com/photo-1583394838336-acd977736f90?w=300&q=80" },
      { name: "Earphones", image: "https://images.unsplash.com/photo-1505740420928-5e560c06d30e?w=300&q=80" },
    ],
  },
  {
    id: 3,
    title: "Deals in Electronics",
    type: "single",
    linkText: "See all deals",
    image: "https://images.unsplash.com/photo-1498049794561-7780e7231661?w=600&q=80",
  },
  {
    id: 4,
    title: "Revamp your kitchen",
    type: "multi",
    linkText: "Explore all",
    items: [
      { name: "Cookware", image: "https://images.unsplash.com/photo-1556909114-f6e7ad7d3136?w=300&q=80" },
      { name: "Appliances", image: "https://images.unsplash.com/photo-1585771724684-38269d6639fd?w=300&q=80" },
      { name: "Storage", image: "https://images.unsplash.com/photo-1610701596007-11502861dcfa?w=300&q=80" },
      { name: "Dinnerware", image: "https://images.unsplash.com/photo-1617196034183-421b4040ed20?w=300&q=80" },
    ],
  },
  {
    id: 5,
    title: "Start your fitness journey",
    type: "multi",
    linkText: "See more",
    items: [
      { name: "Dumbbells", image: "https://images.unsplash.com/photo-1581009146145-b5ef050c2e1e?w=300&q=80" },
      { name: "Yoga Mats", image: "https://images.unsplash.com/photo-1601925260368-ae2f83cf8b7f?w=300&q=80" },
      { name: "Running Shoes", image: "https://images.unsplash.com/photo-1542291026-7eec264c27ff?w=300&q=80" },
      { name: "Water Bottles", image: "https://images.unsplash.com/photo-1602143407151-7111542de6e8?w=300&q=80" },
    ],
  },
  {
    id: 6,
    title: "Shop Laptops & Tablets",
    type: "single",
    linkText: "See all",
    image: "https://images.unsplash.com/photo-1496181133206-80ce9b88a853?w=600&q=80",
  },
  {
    id: 7,
    title: "Beauty & Skincare",
    type: "multi",
    linkText: "See all products",
    items: [
      { name: "Moisturisers", image: "https://images.unsplash.com/photo-1556228578-8c89e6adf883?w=300&q=80" },
      { name: "Serums", image: "https://images.unsplash.com/photo-1620916566398-39f1143ab7be?w=300&q=80" },
      { name: "Sunscreen", image: "https://images.unsplash.com/photo-1556228720-195a672e8a03?w=300&q=80" },
      { name: "Lipstick", image: "https://images.unsplash.com/photo-1586495777744-4e6232bf4f9a?w=300&q=80" },
    ],
  },
  {
    id: 8,
    title: "Books everyone loves",
    type: "multi",
    linkText: "Explore all books",
    items: [
      { name: "Fiction", image: "https://images.unsplash.com/photo-1512820790803-83ca734da794?w=300&q=80" },
      { name: "Self-Help", image: "https://images.unsplash.com/photo-1544716278-ca5e3f4abd8c?w=300&q=80" },
      { name: "Children", image: "https://images.unsplash.com/photo-1629992101753-56d196c8aabb?w=300&q=80" },
      { name: "Biography", image: "https://images.unsplash.com/photo-1585829365295-ab7cd400c167?w=300&q=80" },
    ],
  },
];

const NAV_LINKS = ["Fresh", "Amazon miniTV", "Sell", "Best Sellers", "Mobiles", "Today's Deals", "Electronics", "Prime", "Customer Service", "Fashion", "Home & Kitchen"];

const FOOTER_COLS = [
  {
    heading: "Get to Know Us",
    links: ["About Amazon", "Careers", "Press Releases", "Amazon Science"],
  },
  {
    heading: "Connect with Us",
    links: ["Facebook", "Twitter", "Instagram"],
  },
  {
    heading: "Make Money with Us",
    links: ["Sell on Amazon", "Sell under Amazon Accelerator", "Amazon Associates", "Fulfilment by Amazon", "Advertise Your Products"],
  },
  {
    heading: "Let Us Help You",
    links: ["COVID-19 and Amazon", "Your Account", "Returns Centre", "100% Purchase Protection", "Amazon App Download", "Help"],
  },
];

export default function App() {
  const scrollTop = () => window.scrollTo({ top: 0, behavior: "smooth" });

  return (
    <div className="app">
      <header>
        <div className="nav-belt">
          <div className="belt-logo">
            <img
              src="https://upload.wikimedia.org/wikipedia/commons/a/a9/Amazon_logo.svg"
              alt="Amazon"
              className="logo-img"
            />
            <span className="in-badge">.in</span>
          </div>

          <div className="belt-location">
            <span className="location-icon">📍</span>
            <div className="location-text">
              <span className="location-sub">Delivering to Mumbai 400001</span>
              <span className="location-main">Update location</span>
            </div>
          </div>

          <div className="belt-search">
            <select className="search-select">
              <option>All</option>
              <option>Electronics</option>
              <option>Fashion</option>
              <option>Books</option>
              <option>Mobiles</option>
            </select>
            <input type="text" className="search-input" placeholder="Search Amazon.in" />
            <button className="search-btn">
              <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" fill="currentColor" width="20" height="20">
                <path d="M10 2a8 8 0 105.293 14.707l4.5 4.5 1.414-1.414-4.5-4.5A8 8 0 0010 2zm0 2a6 6 0 110 12A6 6 0 0110 4z"/>
              </svg>
            </button>
          </div>

          <div className="belt-account">
            <span className="belt-sub">Hello, sign in</span>
            <span className="belt-main">Account &amp; Lists ▾</span>
          </div>

          <div className="belt-orders">
            <span className="belt-sub">Returns</span>
            <span className="belt-main">&amp; Orders</span>
          </div>

          <div className="belt-cart">
            <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" fill="currentColor" width="28" height="28">
              <path d="M6 2L3 6v14a2 2 0 002 2h14a2 2 0 002-2V6l-3-4zM16 10a4 4 0 01-8 0"/>
            </svg>
            <span className="belt-main">Cart</span>
          </div>
        </div>

        <nav className="nav-main">
          <a href="#" className="nav-all">☰ All</a>
          {NAV_LINKS.map((link) => (
            <a href="#" key={link} className="nav-link">{link}</a>
          ))}
        </nav>
      </header>

      <main>
        <div className="hero-banner">
          <img
            src="https://images.unsplash.com/photo-1607082348824-0a96f2a4b9da?w=1400&q=80"
            alt="Great Indian Festival"
            className="hero-img"
          />
          <div className="hero-overlay">
            <h2>Great Indian Festival</h2>
            <p>Best deals on Electronics, Fashion & more</p>
            <a href="#" className="hero-cta">Shop Now</a>
          </div>
        </div>

        <div className="grid-container">
          {CATEGORY_CARDS.map((card) => (
            <div className="category-card" key={card.id}>
              <h3 className="card-title">{card.title}</h3>
              {card.type === "multi" ? (
                <div className="card-grid">
                  {card.items.map((item) => (
                    <div className="card-grid-item" key={item.name}>
                      <img src={item.image} alt={item.name} className="grid-item-img" />
                      <p className="grid-item-name">{item.name}</p>
                    </div>
                  ))}
                </div>
              ) : (
                <div className="card-single">
                  <img src={card.image} alt={card.title} className="single-img" />
                </div>
              )}
              <a href="#" className="card-link">{card.linkText}</a>
            </div>
          ))}
        </div>
      </main>

      <footer>
        <button className="back-to-top" onClick={scrollTop}>Back to top</button>

        <div className="footer-links">
          {FOOTER_COLS.map((col) => (
            <div className="footer-col" key={col.heading}>
              <h4 className="footer-heading">{col.heading}</h4>
              <ul>
                {col.links.map((link) => (
                  <li key={link}><a href="#">{link}</a></li>
                ))}
              </ul>
            </div>
          ))}
        </div>

        <div className="footer-belt">
          <div className="footer-logo-wrap">
            <img
              src="https://upload.wikimedia.org/wikipedia/commons/a/a9/Amazon_logo.svg"
              alt="Amazon"
              className="footer-logo"
            />
            <span className="footer-in-badge">.in</span>
          </div>
          <div className="footer-lang">
            <span>🌐</span>
            <select className="lang-select">
              <option>English</option>
              <option>हिन्दी</option>
              <option>தமிழ்</option>
            </select>
          </div>
          <p className="footer-copy">
            © 1996–2026, Amazon.com, Inc. or its affiliates
          </p>
        </div>
      </footer>
    </div>
  );
}
