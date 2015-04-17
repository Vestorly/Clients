#!/usr/bin/env python
"""Add all of the modules in the current directory to __all__"""
import os

# import models into package

from .models.source import Source

from .models.source_input import SourceInput

from .models.sources import Sources

from .models.advisor import Advisor

from .models.article import Article

from .models.articles import Articles

from .models.newsletter import Newsletter

from .models.newsletter_input import NewsletterInput

from .models.newsletters import Newsletters

from .models.posts import Posts

from .models.post import Post

from .models.event_input import EventInput

from .models.event import Event

from .models.events import Events


# import apis into package

from .events_api import EventsApi

from .newslettters_api import NewsletttersApi

from .articles_api import ArticlesApi

from .posts_api import PostsApi

from .advisor_api import AdvisorApi

from .sources_api import SourcesApi

from .session_api import SessionApi


# import ApiClient
from .swagger import ApiClient

__all__ = []

for module in os.listdir(os.path.dirname(__file__)):
  if module != '__init__.py' and module[-3:] == '.py':
    __all__.append(module[:-3])
