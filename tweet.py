import tweepy
import os
import sys

def tweet_commit(message, url):
    # Twitter API の認証情報を環境変数から取得
    api_key = os.getenv("TWITTER_API_KEY")
    api_secret = os.getenv("TWITTER_API_SECRET")
    access_token = os.getenv("TWITTER_ACCESS_TOKEN")
    access_secret = os.getenv("TWITTER_ACCESS_SECRET")

    # 認証
    client = tweepy.Client(
        consumer_key=api_key,
        consumer_secret=api_secret,
        access_token=access_token,
        access_token_secret=access_secret
    )

    # ツイート内容を作成
    tweet_text = f"New commit:\n{message}\n{url}"

    # ツイート送信
    try:
        client.create_tweet(text=tweet_text)
        print("✅ ツイート成功:", tweet_text)
    except Exception as e:
        print("⚠️ ツイート失敗:", e)

if __name__ == "__main__":
    # GitHub Actions から渡されたメッセージとURLを取得
    commit_message = sys.argv[1]
    commit_url = sys.argv[2]

    # ツイートを送信
    tweet_commit(commit_message, commit_url)
