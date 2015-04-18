#!/usr/bin/env python
"""Add all of the modules in the current directory to __all__"""
import os

# import models into package

from .models.source import Source

from .models.source_input import SourceInput

from .models.sources import Sources

from .models.members import Members

from .models.advisor import Advisor

from .models.article import Article

from .models.articles import Articles

from .models.newsletter import Newsletter

from .models.newsletter_input import NewsletterInput

from .models.newsletters import Newsletters

from .models.posts import Posts

from .models.post import Post

from .models.event_input import EventInput

from .models.events import Events

from .models.event import Event

from .models.group import Group

from .models.group_input import GroupInput

from .models.groups import Groups

from .models.newsletter_settings_input import NewsletterSettingsInput

from .models.newsletter_settings import NewsletterSettings


# import apis into package

from .newslettersettings_api import NewslettersettingsApi

from .events_api import EventsApi

from .articles_api import ArticlesApi

from .groups_api import GroupsApi

from .memberevents_api import MembereventsApi

from .advisors_api import AdvisorsApi

from .sessions_api import SessionsApi

from .newsletters_api import NewslettersApi

from .posts_api import PostsApi

from .sources_api import SourcesApi

from .members_api import MembersApi


# import ApiClient
from .swagger import ApiClient

__all__ = []

for module in os.listdir(os.path.dirname(__file__)):
  if module != '__init__.py' and module[-3:] == '.py':
    __all__.append(module[:-3])
