package io.swagger.model;

import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Post  {
  
  private String id = null;
  private String createdAt = null;
  private String updatedAt = null;
  private String externalUrl = null;
  private String externalUrlSource = null;
  private String externalUrlType = null;
  private String imagePath = null;
  private String imageUrl = null;
  private String imageHeight = null;
  private String imageWidth = null;
  private String logoUrl = null;
  private String squareLogoUrl = null;
  private String needsSanitize = null;
  private String summary = null;
  private String topic = null;
  private String approvalStatus = null;
  private List<String> approvalTransactions = new ArrayList<String>() ;
  private List<String> groupIds = new ArrayList<String>() ;
  private String slug = null;
  private String articleId = null;
  private String comment = null;
  private List<String> newsletterIds = new ArrayList<String>() ;
  private Boolean isFeatured = null;
  private String advisorId = null;
  private Boolean isPublished = null;
  private Boolean isResponsive = null;
  private Boolean isProxyNeeded = null;
  private Boolean isMobileProxyNeeded = null;
  private String proxyUrl = null;
  private String video = null;
  private String pdfAttachmentUrl = null;
  private String postDate = null;
  private String displayDate = null;
  private String suitabilityScore = null;
  private String videoId = null;
  private String displayTag = null;
  private String displaySummary = null;
  private String vestorlyUrl = null;
  private String title = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("createdAt")
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("updatedAt")
  public String getUpdatedAt() {
    return updatedAt;
  }
  public void setUpdatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("externalUrl")
  public String getExternalUrl() {
    return externalUrl;
  }
  public void setExternalUrl(String externalUrl) {
    this.externalUrl = externalUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("externalUrlSource")
  public String getExternalUrlSource() {
    return externalUrlSource;
  }
  public void setExternalUrlSource(String externalUrlSource) {
    this.externalUrlSource = externalUrlSource;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("externalUrlType")
  public String getExternalUrlType() {
    return externalUrlType;
  }
  public void setExternalUrlType(String externalUrlType) {
    this.externalUrlType = externalUrlType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("imagePath")
  public String getImagePath() {
    return imagePath;
  }
  public void setImagePath(String imagePath) {
    this.imagePath = imagePath;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("imageUrl")
  public String getImageUrl() {
    return imageUrl;
  }
  public void setImageUrl(String imageUrl) {
    this.imageUrl = imageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("imageHeight")
  public String getImageHeight() {
    return imageHeight;
  }
  public void setImageHeight(String imageHeight) {
    this.imageHeight = imageHeight;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("imageWidth")
  public String getImageWidth() {
    return imageWidth;
  }
  public void setImageWidth(String imageWidth) {
    this.imageWidth = imageWidth;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("logoUrl")
  public String getLogoUrl() {
    return logoUrl;
  }
  public void setLogoUrl(String logoUrl) {
    this.logoUrl = logoUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("squareLogoUrl")
  public String getSquareLogoUrl() {
    return squareLogoUrl;
  }
  public void setSquareLogoUrl(String squareLogoUrl) {
    this.squareLogoUrl = squareLogoUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("needsSanitize")
  public String getNeedsSanitize() {
    return needsSanitize;
  }
  public void setNeedsSanitize(String needsSanitize) {
    this.needsSanitize = needsSanitize;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("summary")
  public String getSummary() {
    return summary;
  }
  public void setSummary(String summary) {
    this.summary = summary;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("topic")
  public String getTopic() {
    return topic;
  }
  public void setTopic(String topic) {
    this.topic = topic;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("approvalStatus")
  public String getApprovalStatus() {
    return approvalStatus;
  }
  public void setApprovalStatus(String approvalStatus) {
    this.approvalStatus = approvalStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("approvalTransactions")
  public List<String> getApprovalTransactions() {
    return approvalTransactions;
  }
  public void setApprovalTransactions(List<String> approvalTransactions) {
    this.approvalTransactions = approvalTransactions;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("groupIds")
  public List<String> getGroupIds() {
    return groupIds;
  }
  public void setGroupIds(List<String> groupIds) {
    this.groupIds = groupIds;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("slug")
  public String getSlug() {
    return slug;
  }
  public void setSlug(String slug) {
    this.slug = slug;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("articleId")
  public String getArticleId() {
    return articleId;
  }
  public void setArticleId(String articleId) {
    this.articleId = articleId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("comment")
  public String getComment() {
    return comment;
  }
  public void setComment(String comment) {
    this.comment = comment;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newsletterIds")
  public List<String> getNewsletterIds() {
    return newsletterIds;
  }
  public void setNewsletterIds(List<String> newsletterIds) {
    this.newsletterIds = newsletterIds;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("isFeatured")
  public Boolean getIsFeatured() {
    return isFeatured;
  }
  public void setIsFeatured(Boolean isFeatured) {
    this.isFeatured = isFeatured;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("advisorId")
  public String getAdvisorId() {
    return advisorId;
  }
  public void setAdvisorId(String advisorId) {
    this.advisorId = advisorId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("isPublished")
  public Boolean getIsPublished() {
    return isPublished;
  }
  public void setIsPublished(Boolean isPublished) {
    this.isPublished = isPublished;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("isResponsive")
  public Boolean getIsResponsive() {
    return isResponsive;
  }
  public void setIsResponsive(Boolean isResponsive) {
    this.isResponsive = isResponsive;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("isProxyNeeded")
  public Boolean getIsProxyNeeded() {
    return isProxyNeeded;
  }
  public void setIsProxyNeeded(Boolean isProxyNeeded) {
    this.isProxyNeeded = isProxyNeeded;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("isMobileProxyNeeded")
  public Boolean getIsMobileProxyNeeded() {
    return isMobileProxyNeeded;
  }
  public void setIsMobileProxyNeeded(Boolean isMobileProxyNeeded) {
    this.isMobileProxyNeeded = isMobileProxyNeeded;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("proxyUrl")
  public String getProxyUrl() {
    return proxyUrl;
  }
  public void setProxyUrl(String proxyUrl) {
    this.proxyUrl = proxyUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("video")
  public String getVideo() {
    return video;
  }
  public void setVideo(String video) {
    this.video = video;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("pdfAttachmentUrl")
  public String getPdfAttachmentUrl() {
    return pdfAttachmentUrl;
  }
  public void setPdfAttachmentUrl(String pdfAttachmentUrl) {
    this.pdfAttachmentUrl = pdfAttachmentUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("postDate")
  public String getPostDate() {
    return postDate;
  }
  public void setPostDate(String postDate) {
    this.postDate = postDate;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("displayDate")
  public String getDisplayDate() {
    return displayDate;
  }
  public void setDisplayDate(String displayDate) {
    this.displayDate = displayDate;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("suitabilityScore")
  public String getSuitabilityScore() {
    return suitabilityScore;
  }
  public void setSuitabilityScore(String suitabilityScore) {
    this.suitabilityScore = suitabilityScore;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("videoId")
  public String getVideoId() {
    return videoId;
  }
  public void setVideoId(String videoId) {
    this.videoId = videoId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("displayTag")
  public String getDisplayTag() {
    return displayTag;
  }
  public void setDisplayTag(String displayTag) {
    this.displayTag = displayTag;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("displaySummary")
  public String getDisplaySummary() {
    return displaySummary;
  }
  public void setDisplaySummary(String displaySummary) {
    this.displaySummary = displaySummary;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("vestorlyUrl")
  public String getVestorlyUrl() {
    return vestorlyUrl;
  }
  public void setVestorlyUrl(String vestorlyUrl) {
    this.vestorlyUrl = vestorlyUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("title")
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
