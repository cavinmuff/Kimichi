<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Your Company - Energizing California Naturally</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <!-- Navbar -->
    <nav>
        <div class="logo">Your Company</div>
        <ul>
            <li><a href="#home">Home</a></li>
            <li><a href="#about">About Us</a></li>
            <li><a href="#product">Product</a></li>
            <li><a href="#careers">Careers</a></li>
            <li><a href="#contact">Contact</a></li>
        </ul>
    </nav>

    <!-- Hero Section -->
    <section id="home" class="hero">
        <h1>Welcome to the Future of Energy Drinks</h1>
        <p>Energizing California Naturally with Guayusa Power</p>
        <a href="#careers" class="cta">Join Our Team</a>
    </section>

    <!-- About Us Section -->
    <section id="about">
        <h2>About Us</h2>
        <p>Our mission is to create a natural, sustainable energy drink that fuels your lifestyle. With roots in agriculture and a passion for innovation, we’re dedicated to a vision of health, wellness, and environmental responsibility.</p>
    </section>

    <!-- Product Section -->
    <section id="product">
        <h2>Our Product</h2>
        <p>Introducing our guayusa-based energy drink. Low-calorie, sustainably sourced, and full of natural energy.</p>
    </section>

    <!-- Careers Section -->
    <section id="careers">
        <h2>Join Our Team</h2>
        <p>We're looking for passionate individuals to grow with us. If you're interested in marketing, product development, or brand representation, we’d love to hear from you!</p>
        <form id="application-form">
            <label for="name">Name:</label>
            <input type="text" id="name" name="name" required>
            
            <label for="email">Email:</label>
            <input type="email" id="email" name="email" required>
            
            <label for="position">Position of Interest:</label>
            <input type="text" id="position" name="position" required>
            
            <button type="submit">Apply Now</button>
        </form>
        <p id="application-response"></p>
    </section>

    <!-- Contact Section -->
    <section id="contact">
        <h2>Contact Us</h2>
        <form id="contact-form">
            <label for="contact-name">Name:</label>
            <input type="text" id="contact-name" name="contact-name" required>
            
            <label for="contact-email">Email:</label>
            <input type="email" id="contact-email" name="contact-email" required>
            
            <label for="message">Message:</label>
            <textarea id="message" name="message" required></textarea>
            
            <button type="submit">Send Message</button>
        </form>
        <p id="contact-response"></p>
    </section>

    <footer>
        <p>&copy; 2024 Your Company - All rights reserved</p>
        <div class="social-links">
            <a href="#">Twitter</a> | <a href="#">Instagram</a> | <a href="#">LinkedIn</a>
        </div>
    </footer>

    <script src="script.js"></script>
</body>
</html>
document.addEventListener("DOMContentLoaded", () => {
    // Form selectors
    const applicationForm = document.getElementById("application-form");
    const contactForm = document.getElementById("contact-form");

    // Response messages
    const applicationResponse = document.getElementById("application-response");
    const contactResponse = document.getElementById("contact-response");

    // Simulate form submission
    const simulateSubmission = (formData) => {
        return new Promise((resolve) => {
            setTimeout(() => resolve("Your submission was successful!"), 1000);
        });
    };

    // Application Form Handler
    applicationForm.addEventListener("submit", async (event) => {
        event.preventDefault();
        applicationResponse.innerText = "Submitting...";
        const formData = new FormData(applicationForm);

        try {
            const response = await simulateSubmission(formData);
            applicationResponse.innerText = response;
            applicationForm.reset();
        } catch (error) {
            applicationResponse.innerText = "There was an error. Please try again.";
        }
    });

    // Contact Form Handler
    contactForm.addEventListener("submit", async (event) => {
        event.preventDefault();
        contactResponse.innerText = "Submitting...";
        const formData = new FormData(contactForm);

        try {
            const response = await simulateSubmission(formData);
            contactResponse.innerText = response;
            contactForm.reset();
        } catch (error) {
            contactResponse.innerText = "There was an error. Please try again.";
        }
    });
});
