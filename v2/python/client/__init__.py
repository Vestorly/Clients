#!/usr/bin/env python
"""Add all of the modules in the current directory to __all__"""
import os

# import models into package

from .models.rss_feed import RSSFeed

from .models.post import Post

from .models.article import Article

from .models.event import Event

from .models.advisor import Advisor

from .models.source import Source

from .models.session import Session


# import apis into package

from .rssfeeds_api import RssfeedsApi

from .events_api import EventsApi

from .articles_api import ArticlesApi

from .advisors_api import AdvisorsApi

from .sessions_api import SessionsApi

from .posts_api import PostsApi

from .sources_api import SourcesApi


# import ApiClient
from .swagger import ApiClient

__all__ = []

for module in os.listdir(os.path.dirname(__file__)):
  if module != '__init__.py' and module[-3:] == '.py':
    __all__.append(module[:-3])
