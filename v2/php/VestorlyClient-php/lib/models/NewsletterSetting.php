<?php
/**
 *  Copyright 2015 Reverb Technologies, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/**
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program. Do not edit the class manually.
 *
 */

namespace VestorlyClient\models;

use \ArrayAccess;

class NewsletterSetting implements ArrayAccess {
  static $swaggerTypes = array(
      '_id' => 'string',
      'email_day_of_week' => 'int',
      'email_hour' => 'int',
      'email_status' => 'string',
      'facebook_active_wall' => 'string',
      'facebook_day_of_week' => 'int',
      'facebook_hour' => 'int',
      'facebook_status' => 'string',
      'linkedin_active_wall' => 'string',
      'linkedin_day_of_week' => 'int',
      'linkedin_hour' => 'int',
      'linkedin_status' => 'string',
      'social_title' => 'string',
      'social_subtitle' => 'string',
      'social_description' => 'string',
      'twitter_day_of_week' => 'int',
      'twitter_hour' => 'int',
      'twitter_status' => 'string',
      'social_posting_text' => 'string',
      'newsletter_type' => 'string',
      'group_id' => 'string',
      'montage_enabled' => 'boolean',
      'montage_title' => 'string',
      'montage_facebook_image_url' => 'string',
      'montage_linkedin_image_url' => 'string',
      'montage_twitter_image_url' => 'string',
      'newsletter_ids' => 'array[string]',
      'primary_email_font' => 'string',
      'footer_email_font' => 'string',
      'email_accent_color' => 'string',
      'render_version' => 'string',
      'header_image_url' => 'string',
      'header_background_color' => 'string',
      'banner_color' => 'string',
      'title_color' => 'string',
      'footer_html' => 'string',
      'intro_text' => 'string',
      'footer_image_url' => 'string',
      'subject' => 'string',
      'salutation_text' => 'string',
      'body_html' => 'string'
  );

  static $attributeMap = array(
      '_id' => '_id',
      'email_day_of_week' => 'email_day_of_week',
      'email_hour' => 'email_hour',
      'email_status' => 'email_status',
      'facebook_active_wall' => 'facebook_active_wall',
      'facebook_day_of_week' => 'facebook_day_of_week',
      'facebook_hour' => 'facebook_hour',
      'facebook_status' => 'facebook_status',
      'linkedin_active_wall' => 'linkedin_active_wall',
      'linkedin_day_of_week' => 'linkedin_day_of_week',
      'linkedin_hour' => 'linkedin_hour',
      'linkedin_status' => 'linkedin_status',
      'social_title' => 'social_title',
      'social_subtitle' => 'social_subtitle',
      'social_description' => 'social_description',
      'twitter_day_of_week' => 'twitter_day_of_week',
      'twitter_hour' => 'twitter_hour',
      'twitter_status' => 'twitter_status',
      'social_posting_text' => 'social_posting_text',
      'newsletter_type' => 'newsletter_type',
      'group_id' => 'group_id',
      'montage_enabled' => 'montage_enabled',
      'montage_title' => 'montage_title',
      'montage_facebook_image_url' => 'montage_facebook_image_url',
      'montage_linkedin_image_url' => 'montage_linkedin_image_url',
      'montage_twitter_image_url' => 'montage_twitter_image_url',
      'newsletter_ids' => 'newsletter_ids',
      'primary_email_font' => 'primary_email_font',
      'footer_email_font' => 'footer_email_font',
      'email_accent_color' => 'email_accent_color',
      'render_version' => 'render_version',
      'header_image_url' => 'header_image_url',
      'header_background_color' => 'header_background_color',
      'banner_color' => 'banner_color',
      'title_color' => 'title_color',
      'footer_html' => 'footer_html',
      'intro_text' => 'intro_text',
      'footer_image_url' => 'footer_image_url',
      'subject' => 'subject',
      'salutation_text' => 'salutation_text',
      'body_html' => 'body_html'
  );

  
  public $_id; /* string */
  public $email_day_of_week; /* int */
  public $email_hour; /* int */
  public $email_status; /* string */
  public $facebook_active_wall; /* string */
  public $facebook_day_of_week; /* int */
  public $facebook_hour; /* int */
  public $facebook_status; /* string */
  public $linkedin_active_wall; /* string */
  public $linkedin_day_of_week; /* int */
  public $linkedin_hour; /* int */
  public $linkedin_status; /* string */
  public $social_title; /* string */
  public $social_subtitle; /* string */
  public $social_description; /* string */
  public $twitter_day_of_week; /* int */
  public $twitter_hour; /* int */
  public $twitter_status; /* string */
  public $social_posting_text; /* string */
  public $newsletter_type; /* string */
  public $group_id; /* string */
  public $montage_enabled; /* boolean */
  public $montage_title; /* string */
  public $montage_facebook_image_url; /* string */
  public $montage_linkedin_image_url; /* string */
  public $montage_twitter_image_url; /* string */
  public $newsletter_ids; /* array[string] */
  public $primary_email_font; /* string */
  public $footer_email_font; /* string */
  public $email_accent_color; /* string */
  public $render_version; /* string */
  public $header_image_url; /* string */
  public $header_background_color; /* string */
  public $banner_color; /* string */
  public $title_color; /* string */
  public $footer_html; /* string */
  public $intro_text; /* string */
  public $footer_image_url; /* string */
  public $subject; /* string */
  public $salutation_text; /* string */
  public $body_html; /* string */

  public function __construct(array $data = null) {
    $this->_id = $data["_id"];
    $this->email_day_of_week = $data["email_day_of_week"];
    $this->email_hour = $data["email_hour"];
    $this->email_status = $data["email_status"];
    $this->facebook_active_wall = $data["facebook_active_wall"];
    $this->facebook_day_of_week = $data["facebook_day_of_week"];
    $this->facebook_hour = $data["facebook_hour"];
    $this->facebook_status = $data["facebook_status"];
    $this->linkedin_active_wall = $data["linkedin_active_wall"];
    $this->linkedin_day_of_week = $data["linkedin_day_of_week"];
    $this->linkedin_hour = $data["linkedin_hour"];
    $this->linkedin_status = $data["linkedin_status"];
    $this->social_title = $data["social_title"];
    $this->social_subtitle = $data["social_subtitle"];
    $this->social_description = $data["social_description"];
    $this->twitter_day_of_week = $data["twitter_day_of_week"];
    $this->twitter_hour = $data["twitter_hour"];
    $this->twitter_status = $data["twitter_status"];
    $this->social_posting_text = $data["social_posting_text"];
    $this->newsletter_type = $data["newsletter_type"];
    $this->group_id = $data["group_id"];
    $this->montage_enabled = $data["montage_enabled"];
    $this->montage_title = $data["montage_title"];
    $this->montage_facebook_image_url = $data["montage_facebook_image_url"];
    $this->montage_linkedin_image_url = $data["montage_linkedin_image_url"];
    $this->montage_twitter_image_url = $data["montage_twitter_image_url"];
    $this->newsletter_ids = $data["newsletter_ids"];
    $this->primary_email_font = $data["primary_email_font"];
    $this->footer_email_font = $data["footer_email_font"];
    $this->email_accent_color = $data["email_accent_color"];
    $this->render_version = $data["render_version"];
    $this->header_image_url = $data["header_image_url"];
    $this->header_background_color = $data["header_background_color"];
    $this->banner_color = $data["banner_color"];
    $this->title_color = $data["title_color"];
    $this->footer_html = $data["footer_html"];
    $this->intro_text = $data["intro_text"];
    $this->footer_image_url = $data["footer_image_url"];
    $this->subject = $data["subject"];
    $this->salutation_text = $data["salutation_text"];
    $this->body_html = $data["body_html"];
  }

  public function offsetExists($offset) {
    return isset($this->$offset);
  }

  public function offsetGet($offset) {
    return $this->$offset;
  }

  public function offsetSet($offset, $value) {
    $this->$offset = $value;
  }

  public function offsetUnset($offset) {
    unset($this->$offset);
  }
}