# import requests
# import os
# import json

# # ======== UPDATE YOUR COOKIES HERE ========
# COOKIES = {
#     "csrftoken": "2X7GCHIo54gWAdgqO9UZVKOMzQWKlZD5aFdfml3R0hjeFHb4NeTn5vNqTdLrJ3GU",
#     "LEETCODE_SESSION": "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzb2NpYWxhY2NvdW50X3NvY2lhbGxvZ2luIjp7ImFjY291bnQiOnsiaWQiOm51bGwsInVzZXJfaWQiOm51bGwsInByb3ZpZGVyIjoiZ29vZ2xlIiwidWlkIjoiMTA5ODg0MDAzODI0NTM5ODM1ODE0IiwibGFzdF9sb2dpbiI6bnVsbCwiZGF0ZV9qb2luZWQiOm51bGwsImV4dHJhX2RhdGEiOnsiaWQiOiIxMDk4ODQwMDM4MjQ1Mzk4MzU4MTQiLCJlbWFpbCI6Im9ydWdhbnRpbWFuaWthbnRhMjRAZ21haWwuY29tIiwidmVyaWZpZWRfZW1haWwiOnRydWUsInBpY3R1cmUiOiJodHRwczovL2xoMy5nb29nbGV1c2VyY29udGVudC5jb20vYS0vQUxWLVVqVVZNSlAwUE1OUV9XM3BLUFp6MW9QcVB6MS0xN2hWUU1qTzNqQmV6QVBWN2UtQ3lEaz1zOTYtYyJ9fSwidXNlciI6eyJpZCI6bnVsbCwicGFzc3dvcmQiOiIhMFBtdWxBb2dPOXFrY050TTRmSm1JNGpCMDBqT3VZVm9GN1ozUXpxMSIsImxhc3RfbG9naW4iOm51bGwsImlzX3N1cGVydXNlciI6ZmFsc2UsInVzZXJuYW1lIjoiIiwiZmlyc3RfbmFtZSI6IiIsImxhc3RfbmFtZSI6IiIsImVtYWlsIjoib3J1Z2FudGltYW5pa2FudGEyNEBnbWFpbC5jb20iLCJpc19zdGFmZiI6ZmFsc2UsImlzX2FjdGl2ZSI6dHJ1ZSwiZGF0ZV9qb2luZWQiOiIyMDI1LTA5LTEwVDEzOjU4OjMzLjEyOFoifSwic3RhdGUiOnsibmV4dCI6Ii9wcm9ibGVtLWxpc3Qvc2xpZGluZy13aW5kb3cvIiwicHJvY2VzcyI6ImxvZ2luIiwic2NvcGUiOiIiLCJhdXRoX3BhcmFtcyI6IiJ9LCJlbWFpbF9hZGRyZXNzZXMiOlt7ImlkIjpudWxsLCJ1c2VyX2lkIjpudWxsLCJlbWFpbCI6Im9ydWdhbnRpbWFuaWthbnRhMjRAZ21haWwuY29tIiwidmVyaWZpZWQiOnRydWUsInByaW1hcnkiOnRydWV9XSwidG9rZW4iOnsiaWQiOm51bGwsImFwcF9pZCI6MSwiYWNjb3VudF9pZCI6bnVsbCwidG9rZW4iOiJ5YTI5LmEwQVMzSDZOdy1aaW5ySktLQmRpdHlTekJ3NlZ4aFNQM0lRLTJvM0R5Ty1Ca2VpWjhIeHQ3UVhLWmJPal84R0VPWTR1dWNoUVAtSllTdUMxNWk1b216LWJiSFJBTGl3M3UzdDFlZTM1SkpMRXVVR1VMcEF2Tmc2Q3pBZzV1QVhDa2M5b2VRdUxzTkpWSGt5YmlXNFBab3ZQT3JGVnZqUzNnLVlXYmJIUlNkbGhMRHMwdElaZHU5M3BNWlhva2I0LVRKWlJZdmRyeHoyd2FDZ1lLQWZ3U0FSTVNGUUhHWDJNaW1iSDU3TWprS1RIRnJOeTBnM0dJRXcwMjA5IiwidG9rZW5fc2VjcmV0IjoiIiwiZXhwaXJlc19hdCI6IjIwMjUtMDktMTBUMTQ6NTg6MzEuMDI4WiJ9fSwiX2F1dGhfdXNlcl9pZCI6IjE2OTkyMDc1IiwiX2F1dGhfdXNlcl9iYWNrZW5kIjoiZGphbmdvLmNvbnRyaWIuYXV0aC5iYWNrZW5kcy5Nb2RlbEJhY2tlbmQiLCJfYXV0aF91c2VyX2hhc2giOiIxNzNiNGQyOGIwYTdiMjM4ZDE1YmRhMzBmMzdhNTIxMDBiZWQyMjJhZDI2Yjk3ZDBjZjQxMWY0NjMzYWFiMmMzIiwic2Vzc2lvbl91dWlkIjoiNmIyZWExMjgiLCJpZCI6MTY5OTIwNzUsImVtYWlsIjoib3J1Z2FudGltYW5pa2FudGEyNEBnbWFpbC5jb20iLCJ1c2VybmFtZSI6Im1hbmlrYW50YV8zMTQiLCJ1c2VyX3NsdWciOiJtYW5pa2FudGFfMzE0IiwiYXZhdGFyIjoiaHR0cHM6Ly9hc3NldHMubGVldGNvZGUuY29tL3VzZXJzL2RlZmF1bHRfYXZhdGFyLmpwZyIsInJlZnJlc2hlZF9hdCI6MTc1NzUxMzI1MiwiaXAiOiIyNDAxOjQ5MDA6Njc1Zjo5ZWEyOjM1OTg6N2Q3NTpmNzliOjhkNDEiLCJpZGVudGl0eSI6IjdjZWVkMTllZTVlYmRiZjc5MmY1NjMyOTU5MWZmYzUzIiwiZGV2aWNlX3dpdGhfaXAiOlsiNWY5OWI0NTBhNDA2YTdlMjg2MzVkNmYwODUyNjdlNjAiLCIyNDAxOjQ5MDA6Njc1Zjo5ZWEyOjM1OTg6N2Q3NTpmNzliOjhkNDEiXSwiX3Nlc3Npb25fZXhwaXJ5IjoxMjA5NjAwfQ.WHB9vuzUcvFVNGBe7QojEENcd3lkvEdUjT8t9zZAD5I",
# }

# # ======== SETTINGS ========
# USERNAME = "manikanta_314"  # <-- Replace with your actual LeetCode username
# SAVE_FOLDER = "lchelper"

# # Create the folder if it doesn't exist
# os.makedirs(SAVE_FOLDER, exist_ok=True)

# # LeetCode submissions API
# API_URL = "https://leetcode.com/api/submissions/"

# def fetch_submissions(offset=0, limit=20):
#     """Fetch a page of submissions"""
#     params = {
#         "offset": offset,
#         "limit": limit
#     }
#     response = requests.get(API_URL, params=params, cookies=COOKIES)
    
#     if response.status_code == 200:
#         return response.json()
#     else:
#         print("Error fetching submissions:", response.status_code)
#         print(response.text)
#         return None

# def save_submission(problem_name, submission_id, code, lang):
#     """Save the solution to a file"""
#     safe_name = "".join(c if c.isalnum() or c in ".-" else "" for c in problem_name)
#     filename = f"{safe_name}_{submission_id}.{lang}"
#     filepath = os.path.join(SAVE_FOLDER, filename)

#     with open(filepath, "w", encoding="utf-8") as f:
#         f.write(code)

#     print(f"Saved: {filepath}")

# def main():
#     offset = 0
#     limit = 20

#     while True:
#         data = fetch_submissions(offset, limit)
#         if not data or "submissions_dump" not in data:
#             break

#         submissions = data["submissions_dump"]
#         if not submissions:
#             break  # No more submissions

#         for sub in submissions:
#             if sub["status_display"] == "Accepted":
#                 problem_name = sub["title"]
#                 submission_id = sub["id"]
#                 code = sub["code"]
#                 lang = sub["lang"]

#                 save_submission(problem_name, submission_id, code, lang)

#         offset += limit

#     print("All submissions downloaded!")

# if _name_ == "_main_":
#     main()
import requests
import os
import json
import re
import time

# ====== UPDATE WITH YOUR COOKIES ======
COOKIES = {
    "csrftoken": "7XcE2w42xZcfK4DR1oZGpRa6vDjDffF2fAS9MFnj3WmZtbFdJgIVYvUpc0LTzvc8",
    "LEETCODE_SESSION": "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfYXV0aF91c2VyX2lkIjoiOTc1OTY3NyIsIl9hdXRoX3VzZXJfYmFja2VuZCI6ImFsbGF1dGguYWNjb3VudC5hdXRoX2JhY2tlbmRzLkF1dGhlbnRpY2F0aW9uQmFja2VuZCIsIl9hdXRoX3VzZXJfaGFzaCI6Ijc1M2FiYTEyNzU0OThiMTUzNGMxY2JkNDkxMWNmNmZmYmFhM2Q3Nzg0MWQ0NDk2YTc1ZTc4OTNmMGQzMzAwZWQiLCJzZXNzaW9uX3V1aWQiOiI4MmRjMmIzNCIsImlkIjo5NzU5Njc3LCJlbWFpbCI6InNyZWViaGFyZ2F2YS5rYW5kYWxhQGdtYWlsLmNvbSIsInVzZXJuYW1lIjoiU3JlZUJoYXJnYXZhIiwidXNlcl9zbHVnIjoiU3JlZUJoYXJnYXZhIiwiYXZhdGFyIjoiaHR0cHM6Ly9hc3NldHMubGVldGNvZGUuY29tL3VzZXJzL1NyZWVCaGFyZ2F2YS9hdmF0YXJfMTcwODY1MTIwMC5wbmciLCJyZWZyZXNoZWRfYXQiOjE3NTc4NDgxMTMsImlwIjoiNDkuMTUuMjE0LjE1MCIsImlkZW50aXR5IjoiYTNmNTdiYmUyMWM0ZTMwMzc5MjI4YWQ3Nzg4ZjIyNGQiLCJkZXZpY2Vfd2l0aF9pcCI6WyJlMjdhMDMxMTMwMGIyN2Y1Yjc5NmU1OTUzMDE5ZjYxOCIsIjQ5LjE1LjIxNC4xNTAiXSwiX3Nlc3Npb25fZXhwaXJ5IjoxMjA5NjAwfQ.YRNK2zMPkcVJcZIpo9jflVjrKtq2D9Phh6PSblMofxo",
}


USERNAME = "SreeBhargava"  # Replace with your LeetCode username
SAVE_ROOT = "LeetCode 2.0"

API_URL = "https://leetcode.com/api/submissions/"
GRAPHQL_URL = "https://leetcode.com/graphql"

# Ensure root folder exists
os.makedirs(SAVE_ROOT, exist_ok=True)

# Map LeetCode language names to file extensions
LANG_EXTENSIONS = {
    "cpp": "cpp",
    "c": "c",
    "java": "java",
    "python": "py",
    "python3": "py",
    "csharp": "cs",
    "javascript": "js",
    "typescript": "ts",
    "kotlin": "kt",
    "golang": "go",
    "swift": "swift",
    "ruby": "rb",
    "rust": "rs",
    "php": "php",
    "scala": "scala",
    "r": "r",
    "mysql": "sql",
}

def fetch_submissions(offset=0, limit=20):
    """Fetch a page of submissions."""
    params = {"offset": offset, "limit": limit}
    response = requests.get(API_URL, params=params, cookies=COOKIES)
    if response.status_code == 200:
        return response.json()
    else:
        print("Error fetching submissions:", response.status_code, response.text)
        return None

def fetch_problem_details(slug):
    """Fetch problem details for README.md."""
    query = {
        "operationName": "questionData",
        "variables": {"titleSlug": slug},
        "query": """
        query questionData($titleSlug: String!) {
          question(titleSlug: $titleSlug) {
            title
            difficulty
            content
            topicTags {
              name
            }
            stats
            likes
            dislikes
          }
        }
        """
    }
    response = requests.post(GRAPHQL_URL, json=query, cookies=COOKIES)
    if response.status_code == 200:
        data = response.json()
        return data.get("data", {}).get("question", None)
    else:
        print(f"Error fetching details for {slug}: {response.status_code}")
        return None

def sanitize_name(name):
    """Make folder-safe names."""
    return re.sub(r'[^a-zA-Z0-9_\-]', '_', name)

def save_submission(problem_slug, problem_title, submission_id, code, lang, problem_url, problem_details):
    """Save a single submission with folder structure."""
    safe_problem_name = sanitize_name(problem_title)
    problem_folder = os.path.join(SAVE_ROOT, safe_problem_name)
    os.makedirs(problem_folder, exist_ok=True)

    # Determine correct file extension
    extension = LANG_EXTENSIONS.get(lang.lower(), lang)

    # Save code
    filename = f"{submission_id}.{extension}"
    filepath = os.path.join(problem_folder, filename)

    with open(filepath, "w", encoding="utf-8") as f:
        f.write(code)

    print(f"Saved: {filepath}")

    # Generate README.md for the problem if not exists
    readme_path = os.path.join(problem_folder, "README.md")
    if not os.path.exists(readme_path) and problem_details:
        tags = ", ".join(tag["name"] for tag in problem_details.get("topicTags", []))
        content = problem_details.get("content", "")
        difficulty = problem_details.get("difficulty", "Unknown")

        with open(readme_path, "w", encoding="utf-8") as f:
            f.write(f"# {problem_title}\n\n")
            f.write(f"*Difficulty:* {difficulty}\n\n")
            f.write(f"[View problem on LeetCode]({problem_url})\n\n")
            f.write(f"*Tags:* {tags}\n\n")
            f.write("---\n\n")
            f.write(content)

        print(f"Generated README.md for {problem_title}")

def main():
    offset = 0
    limit = 20

    while True:
        data = fetch_submissions(offset, limit)
        if not data or "submissions_dump" not in data:
            break

        submissions = data["submissions_dump"]
        if not submissions:
            break  # No more submissions

        for sub in submissions:
            if sub["status_display"] == "Accepted":
                problem_title = sub["title"]
                problem_slug = sub["title_slug"]
                submission_id = sub["id"]
                code = sub["code"]
                lang = sub["lang"]
                problem_url = f"https://leetcode.com/problems/{problem_slug}/"

                # Fetch problem details for README.md
                problem_details = fetch_problem_details(problem_slug)
                save_submission(problem_slug, problem_title, submission_id, code, lang, problem_url, problem_details)

                time.sleep(0.5)  # To avoid being blocked by LeetCode

        offset += limit

    print("✅ All submissions downloaded with folder structure!")

if __name__ == "__main__":
    main()