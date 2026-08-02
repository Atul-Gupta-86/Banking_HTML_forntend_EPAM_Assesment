# XYZ Bank Diwali Coupon Generator

## 📖 Project Overview
This project is a **frontend assessment demonstration** built with **HTML, CSS, and JavaScript**. It simulates a customer verification flow where users validate a specific ID format to unlock and generate a random festive coupon code. 

The application focuses on **client-side logic**, DOM manipulation, and user interaction handling without requiring a backend server or database.

## ✨ Key Features
- **Mock ID Verification**: Implements client-side validation logic to check if a Customer ID contains the required "XYZ" substring.
- **Dynamic Coupon Generation**: Generates a unique, random **9-character alphanumeric code** upon successful validation.
- **Interactive UI Controls**:
  - **Toggle Visibility**: Users can show or hide the step-by-step process guide.
  - **Real-time Feedback**: Displays instant success or error messages based on input validity.
  - **State Management**: Disables the "Generate" button until validation is successful and prevents duplicate generations.
- **User Engagement**: Includes a welcome message triggered on hover and an initial alert on page load.

## 🛠️ Technologies Used
- **HTML5**: Structural markup and form elements.
- **CSS3**: Styling for layout and visual feedback (linked via `style.css`).
- **JavaScript (ES5/ES6)**: 
  - Event handling (`onclick`, `onmouseenter`, `onload`).
  - DOM manipulation (`getElementById`, `querySelector`, `innerHTML`).
  - Logic flow control and random string generation.

## 🚀 How to Run
Since this is a static frontend project, no installation or server setup is required.

1. **Clone or Download** the repository.
2. Ensure `index.html` and `style.css` are in the same directory.
3. Open `index.html` in any modern web browser.

## 📝 Usage Instructions
1. **Enter ID**: Type a Customer ID containing the substring **"XYZ"** (e.g., `XYZ12345`).
2. **Validate**: Click the **"Validate Id"** button.
   - *Success*: The system confirms the ID is correct and enables the coupon button.
   - *Error*: An error message appears if the ID is empty or missing "XYZ".
3. **Generate**: Click **"Generate Coupon Code"** to receive your random Diwali voucher.
4. **Toggle Steps**: Use the "Hide/Show Processes" buttons to manage the visibility of the instruction guide.

## 🔍 Code Logic Highlights
- **Validation Logic**: Checks `string.includes("XYZ")` to simulate bank ID verification.
- **Random Generator**: Uses a loop with `Math.floor(Math.random() * 26)` to select characters from `A-Z` for a 9-character string.
- **DOM Updates**: Dynamically injects messages into `.div1` (validation status) and `.div2` (coupon result) without page reloads.

## ⚠️ Note for Assessors
This project is designed as a **frontend prototype**. The verification step uses **mock logic** (checking for a specific string pattern) rather than a real database API, as per the assessment requirements to demonstrate core JavaScript and DOM manipulation skills.   


<img width="1729" height="746" alt="Image1" src="https://github.com/user-attachments/assets/5c2b1aaa-cf47-4d7e-aa8e-f238c60f0c22" />


<img width="1432" height="574" alt="Image2" src="https://github.com/user-attachments/assets/84f57438-fe5b-48b1-a66d-ffe1249cf3a4" />


<img width="1612" height="607" alt="Image3" src="https://github.com/user-attachments/assets/ae365b0e-5e81-4eaa-922d-b55209860098" />


<img width="1557" height="694" alt="Image4" src="https://github.com/user-attachments/assets/816f7e71-859e-4b88-9cec-a9ad0ef30f16" />


<img width="1516" height="678" alt="Image5" src="https://github.com/user-attachments/assets/e6febd5a-c6fd-41a0-87eb-888186a84a6e" />
