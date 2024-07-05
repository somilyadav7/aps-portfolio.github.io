# Portfolio - LinkedIn

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>Somil Yadav</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
<dt>Course Instructor</dt>
<dd>Prakash Hegade</dd>  
<dt>Portfolio Domain</dt>
<dd>LinkedIn</dd>

</dl>

* * *


#### Note:
This page hosts:

1. [Introduction](#introduction)
2. [Need of Portfolio](#need-of-portfolio)
2. [Objectives](#objectives)
4. [Business Use Cases](#business-use-cases)

* * *
**Enhancing LinkedIn Services through Data Structures and Algorithms**
* * *

## Introduction

  LinkedIn is a social network for the business community. Founded in 2002, the site is a place for professionals to connect with past and current colleagues, increase business connections, network within their industry, discuss business ideas, search for jobs and look for new hires. This portfolio project explores how applying data structures and algorithms can significantly enhance LinkedIn's efficiency and effectiveness, drawing on the theoretical knowledge and practical skills from Algorithmic Problem Solving (APS).

By optimizing recommendation systems for improved relevance, refining search algorithms for better accuracy and speed, and addressing other core functionalities, this project demonstrates the vast potential for enhancement within LinkedIn ecosystem. Each use case bridges the gap between theory and practical application, showcasing how algorithmic techniques can solve real-world business challenges, thereby improving LinkedIn performance, reliability, and efficiency.

## Need of Portfolio

A portfolio focused on LinkedIn is necessary because it addresses the complex challenges of optimizing a professional networking platform through the application of data structures and algorithms (DSA). Enhancing functionalities such as search algorithms, recommendation systems, and network analysis can significantly improve user engagement and satisfaction. By applying theoretical knowledge from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) course to real-world scenarios, this portfolio bridges the gap between academic learning and practical implementation. It not only showcases the ability to solve real-world problems but also demonstrates a commitment to improving the efficiency and effectiveness of LinkedIn's services, making it an invaluable resource for professional development and innovation in the tech industry.

# Objectives

**1.** Apply theoretical concepts from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses to practical, real-world problems within the LinkedIn platform.

**2.** Address specific business challenges faced by LinkedIn through the application of algorithmic problem-solving.

**3.** Explore and implement algorithmic solutions that enhance LinkedIn’s search functionality, recommendation systems, and user engagement.

**4.** Optimize network analysis and connection suggestions to foster more meaningful professional relationships.

**5.** Improve data processing and analytics to provide valuable insights to LinkedIn users about their profiles and industry trends.

## Business Use Cases

### 1. **Profile Matching for Job Fit**

**Algorithm**: Longest Common Subsequence

The Longest Common Subsequence (LCS) algorithm can be effectively utilized in LinkedIn profile matching for job fit. The LCS algorithm helps identify the most relevant job matches for a user profile by comparing the sequences of skills, experiences, and qualifications listed in both job descriptions and user profiles. By treating job descriptions and user profiles as sequences of keywords(skills, job titles, companies, etc.). The LCS algorithm finds the longest subsequence common to both. This subsequence represents the overlapping skills that are necessary for the job position.

For example, consider a job description that lists skills such as "Java", "Project Management", "Agile", and "Team Leadership." A user's profile have "Python", "Java", "Agile", "Software Development", and "Team Leadership." The LCS algorithm will identify "Java", "Agile", and "Team Leadership" as the common subsequence. The length and content of this common subsequence provide a measure of how well the user's profile matches the job requirements. Profiles with longer common subsequences are deemed more suitable, enabling LinkedIn to prioritize and recommend jobs that closely align with a user's skills and experiences.

**Complexity Analysis**

Time Complexity: O(N * M) where N and M are the length of the two strings.

Space Complexity: O(N+M) auxiliary recursion stack space where N and M are the length of the two strings.

[Code](https://github.com/somilyadav7/aps-portfolio.github.io/blob/main/Codes/Longest-Common-Subsequence.cpp)
* * *

### 2. **Missing Sections in a LinkedIn Profile**

**Algorithm**: Set Difference

LinkedIn profiles can be divided into different sections such as "Experience," "Skills," "Education," "Certifications," "Projects," and more. To help users enhance their profiles, it’s important to identify which of these recommended sections are currently missing. Using sets, we can represent the existing sections of a user profile and the recommended sections. By calculating the difference between these two sets, we can easily determine the missing sections.

* * *

### 3. **Common Skills Between Two Profiles**

**Algorithm**: Longest Common Substring

The "Longest Common Substring" algorithm can be effectively applied to identify common skills between two profiles on LinkedIn. In this context, each profile can be seen as a sequence of skills, and the algorithm is used to find the longest sequence of skills that appears in both profiles.

* * *
