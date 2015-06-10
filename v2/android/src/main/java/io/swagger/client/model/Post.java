package io.swagger.client.model;

import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Post  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("created_at")
  private String createdAt = null;
  @SerializedName("updated_at")
  private String updatedAt = null;
  @SerializedName("external_url")
  private String externalUrl = null;
  @SerializedName("external_url_source")
  private String externalUrlSource = null;
  @SerializedName("external_url_type")
  private String externalUrlType = null;
  @SerializedName("image_path")
  private String imagePath = null;
  @SerializedName("image_url")
  private String imageUrl = null;
  @SerializedName("image_height")
  private String imageHeight = null;
  @SerializedName("image_width")
  private String imageWidth = null;
  @SerializedName("logo_url")
  private String logoUrl = null;
  @SerializedName("square_logo_url")
  private String squareLogoUrl = null;
  @SerializedName("needs_sanitize")
  private String needsSanitize = null;
  @SerializedName("summary")
  private String summary = null;
  @SerializedName("topic")
  private String topic = null;
  @SerializedName("approval_status")
  private String approvalStatus = null;
  @SerializedName("approval_transactions")
  private List<String> approvalTransactions = new ArrayList<String>() ;
  @SerializedName("group_ids")
  private List<String> groupIds = new ArrayList<String>() ;
  @SerializedName("slug")
  private String slug = null;
  @SerializedName("article_id")
  private String articleId = null;
  @SerializedName("comment")
  private String comment = null;
  @SerializedName("newsletter_ids")
  private List<String> newsletterIds = new ArrayList<String>() ;
  @SerializedName("is_featured")
  private Boolean isFeatured = null;
  @SerializedName("advisor_id")
  private String advisorId = null;
  @SerializedName("is_published")
  private Boolean isPublished = null;
  @SerializedName("is_responsive")
  private Boolean isResponsive = null;
  @SerializedName("is_proxy_needed")
  private Boolean isProxyNeeded = null;
  @SerializedName("is_mobile_proxy_needed")
  private Boolean isMobileProxyNeeded = null;
  @SerializedName("proxy_url")
  private String proxyUrl = null;
  @SerializedName("video")
  private String video = null;
  @SerializedName("pdf_attachment_url")
  private String pdfAttachmentUrl = null;
  @SerializedName("post_date")
  private String postDate = null;
  @SerializedName("display_date")
  private String displayDate = null;
  @SerializedName("suitability_score")
  private String suitabilityScore = null;
  @SerializedName("video_id")
  private String videoId = null;
  @SerializedName("display_tag")
  private String displayTag = null;
  @SerializedName("display_summary")
  private String displaySummary = null;
  @SerializedName("vestorly_url")
  private String vestorlyUrl = null;
  @SerializedName("title")
  private String title = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getUpdatedAt() {
    return updatedAt;
  }
  public void setUpdatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getExternalUrl() {
    return externalUrl;
  }
  public void setExternalUrl(String externalUrl) {
    this.externalUrl = externalUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getExternalUrlSource() {
    return externalUrlSource;
  }
  public void setExternalUrlSource(String externalUrlSource) {
    this.externalUrlSource = externalUrlSource;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getExternalUrlType() {
    return externalUrlType;
  }
  public void setExternalUrlType(String externalUrlType) {
    this.externalUrlType = externalUrlType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getImagePath() {
    return imagePath;
  }
  public void setImagePath(String imagePath) {
    this.imagePath = imagePath;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getImageUrl() {
    return imageUrl;
  }
  public void setImageUrl(String imageUrl) {
    this.imageUrl = imageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getImageHeight() {
    return imageHeight;
  }
  public void setImageHeight(String imageHeight) {
    this.imageHeight = imageHeight;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getImageWidth() {
    return imageWidth;
  }
  public void setImageWidth(String imageWidth) {
    this.imageWidth = imageWidth;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getLogoUrl() {
    return logoUrl;
  }
  public void setLogoUrl(String logoUrl) {
    this.logoUrl = logoUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSquareLogoUrl() {
    return squareLogoUrl;
  }
  public void setSquareLogoUrl(String squareLogoUrl) {
    this.squareLogoUrl = squareLogoUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getNeedsSanitize() {
    return needsSanitize;
  }
  public void setNeedsSanitize(String needsSanitize) {
    this.needsSanitize = needsSanitize;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSummary() {
    return summary;
  }
  public void setSummary(String summary) {
    this.summary = summary;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getTopic() {
    return topic;
  }
  public void setTopic(String topic) {
    this.topic = topic;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getApprovalStatus() {
    return approvalStatus;
  }
  public void setApprovalStatus(String approvalStatus) {
    this.approvalStatus = approvalStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getApprovalTransactions() {
    return approvalTransactions;
  }
  public void setApprovalTransactions(List<String> approvalTransactions) {
    this.approvalTransactions = approvalTransactions;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getGroupIds() {
    return groupIds;
  }
  public void setGroupIds(List<String> groupIds) {
    this.groupIds = groupIds;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSlug() {
    return slug;
  }
  public void setSlug(String slug) {
    this.slug = slug;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getArticleId() {
    return articleId;
  }
  public void setArticleId(String articleId) {
    this.articleId = articleId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getComment() {
    return comment;
  }
  public void setComment(String comment) {
    this.comment = comment;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getNewsletterIds() {
    return newsletterIds;
  }
  public void setNewsletterIds(List<String> newsletterIds) {
    this.newsletterIds = newsletterIds;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsFeatured() {
    return isFeatured;
  }
  public void setIsFeatured(Boolean isFeatured) {
    this.isFeatured = isFeatured;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getAdvisorId() {
    return advisorId;
  }
  public void setAdvisorId(String advisorId) {
    this.advisorId = advisorId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsPublished() {
    return isPublished;
  }
  public void setIsPublished(Boolean isPublished) {
    this.isPublished = isPublished;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsResponsive() {
    return isResponsive;
  }
  public void setIsResponsive(Boolean isResponsive) {
    this.isResponsive = isResponsive;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsProxyNeeded() {
    return isProxyNeeded;
  }
  public void setIsProxyNeeded(Boolean isProxyNeeded) {
    this.isProxyNeeded = isProxyNeeded;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsMobileProxyNeeded() {
    return isMobileProxyNeeded;
  }
  public void setIsMobileProxyNeeded(Boolean isMobileProxyNeeded) {
    this.isMobileProxyNeeded = isMobileProxyNeeded;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getProxyUrl() {
    return proxyUrl;
  }
  public void setProxyUrl(String proxyUrl) {
    this.proxyUrl = proxyUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getVideo() {
    return video;
  }
  public void setVideo(String video) {
    this.video = video;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getPdfAttachmentUrl() {
    return pdfAttachmentUrl;
  }
  public void setPdfAttachmentUrl(String pdfAttachmentUrl) {
    this.pdfAttachmentUrl = pdfAttachmentUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getPostDate() {
    return postDate;
  }
  public void setPostDate(String postDate) {
    this.postDate = postDate;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getDisplayDate() {
    return displayDate;
  }
  public void setDisplayDate(String displayDate) {
    this.displayDate = displayDate;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSuitabilityScore() {
    return suitabilityScore;
  }
  public void setSuitabilityScore(String suitabilityScore) {
    this.suitabilityScore = suitabilityScore;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getVideoId() {
    return videoId;
  }
  public void setVideoId(String videoId) {
    this.videoId = videoId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getDisplayTag() {
    return displayTag;
  }
  public void setDisplayTag(String displayTag) {
    this.displayTag = displayTag;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getDisplaySummary() {
    return displaySummary;
  }
  public void setDisplaySummary(String displaySummary) {
    this.displaySummary = displaySummary;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getVestorlyUrl() {
    return vestorlyUrl;
  }
  public void setVestorlyUrl(String vestorlyUrl) {
    this.vestorlyUrl = vestorlyUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Post {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("  updatedAt: ").append(updatedAt).append("\n");
    sb.append("  externalUrl: ").append(externalUrl).append("\n");
    sb.append("  externalUrlSource: ").append(externalUrlSource).append("\n");
    sb.append("  externalUrlType: ").append(externalUrlType).append("\n");
    sb.append("  imagePath: ").append(imagePath).append("\n");
    sb.append("  imageUrl: ").append(imageUrl).append("\n");
    sb.append("  imageHeight: ").append(imageHeight).append("\n");
    sb.append("  imageWidth: ").append(imageWidth).append("\n");
    sb.append("  logoUrl: ").append(logoUrl).append("\n");
    sb.append("  squareLogoUrl: ").append(squareLogoUrl).append("\n");
    sb.append("  needsSanitize: ").append(needsSanitize).append("\n");
    sb.append("  summary: ").append(summary).append("\n");
    sb.append("  topic: ").append(topic).append("\n");
    sb.append("  approvalStatus: ").append(approvalStatus).append("\n");
    sb.append("  approvalTransactions: ").append(approvalTransactions).append("\n");
    sb.append("  groupIds: ").append(groupIds).append("\n");
    sb.append("  slug: ").append(slug).append("\n");
    sb.append("  articleId: ").append(articleId).append("\n");
    sb.append("  comment: ").append(comment).append("\n");
    sb.append("  newsletterIds: ").append(newsletterIds).append("\n");
    sb.append("  isFeatured: ").append(isFeatured).append("\n");
    sb.append("  advisorId: ").append(advisorId).append("\n");
    sb.append("  isPublished: ").append(isPublished).append("\n");
    sb.append("  isResponsive: ").append(isResponsive).append("\n");
    sb.append("  isProxyNeeded: ").append(isProxyNeeded).append("\n");
    sb.append("  isMobileProxyNeeded: ").append(isMobileProxyNeeded).append("\n");
    sb.append("  proxyUrl: ").append(proxyUrl).append("\n");
    sb.append("  video: ").append(video).append("\n");
    sb.append("  pdfAttachmentUrl: ").append(pdfAttachmentUrl).append("\n");
    sb.append("  postDate: ").append(postDate).append("\n");
    sb.append("  displayDate: ").append(displayDate).append("\n");
    sb.append("  suitabilityScore: ").append(suitabilityScore).append("\n");
    sb.append("  videoId: ").append(videoId).append("\n");
    sb.append("  displayTag: ").append(displayTag).append("\n");
    sb.append("  displaySummary: ").append(displaySummary).append("\n");
    sb.append("  vestorlyUrl: ").append(vestorlyUrl).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
