/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * VideoResource.h
 *
 * 
 */

#ifndef VideoResource_H_
#define VideoResource_H_


#include "ModelBase.h"

#include "CommentResource.h"
#include "SimpleReferenceResource«long».h"
#include <cpprest/details/basic_types.h>
#include "SimpleUserResource.h"
#include <map>
#include <vector>
#include "Property.h"
#include "SimpleReferenceResource«string».h"
#include "ContributionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  VideoResource
    : public ModelBase
{
public:
    VideoResource();
    virtual ~VideoResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// VideoResource members

    /// <summary>
    /// Whether the video is available, based on various factors
    /// </summary>
    bool getActive() const;
    bool activeIsSet() const;
    void unsetActive();
    void setActive(bool value);
    /// <summary>
    /// A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Property>>& getAdditionalProperties();
    bool additionalPropertiesIsSet() const;
    void unsetAdditional_properties();
    void setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value);
    /// <summary>
    /// The original artist of the media
    /// </summary>
    std::shared_ptr<SimpleReferenceResource«long»> getAuthor() const;
    bool authorIsSet() const;
    void unsetAuthor();
    void setAuthor(std::shared_ptr<SimpleReferenceResource«long»> value);
    /// <summary>
    /// The date the media was created as a unix timestamp in seconds
    /// </summary>
    int64_t getAuthored() const;
    bool authoredIsSet() const;
    void unsetAuthored();
    void setAuthored(int64_t value);
    /// <summary>
    /// Whether the video has been banned or not
    /// </summary>
    bool getBanned() const;
    bool bannedIsSet() const;
    void unsetBanned();
    void setBanned(bool value);
    /// <summary>
    /// The category of the video
    /// </summary>
    std::shared_ptr<SimpleReferenceResource«string»> getCategory() const;
        void setCategory(std::shared_ptr<SimpleReferenceResource«string»> value);
    /// <summary>
    /// The comments of the video
    /// </summary>
    std::vector<std::shared_ptr<CommentResource>>& getComments();
    bool commentsIsSet() const;
    void unsetComments();
    void setComments(std::vector<std::shared_ptr<CommentResource>> value);
    /// <summary>
    /// Artists that contributed to the creation. See separate endpoint to add to list
    /// </summary>
    std::vector<std::shared_ptr<ContributionResource>>& getContributors();
    bool contributorsIsSet() const;
    void unsetContributors();
    void setContributors(std::vector<std::shared_ptr<ContributionResource>> value);
    /// <summary>
    /// The date/time this resource was created in seconds since unix epoch
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The country of an embedable version
    /// </summary>
    utility::string_t getEmbed() const;
    bool embedIsSet() const;
    void unsetEmbed();
    void setEmbed(utility::string_t value);
    /// <summary>
    /// The file extension of the media file. 1-5 characters
    /// </summary>
    utility::string_t getExtension() const;
        void setExtension(utility::string_t value);
    /// <summary>
    /// The height of the video in px
    /// </summary>
    int32_t getHeight() const;
        void setHeight(int32_t value);
    /// <summary>
    /// The unique ID for that resource
    /// </summary>
    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int64_t value);
    /// <summary>
    /// The length of the video in seconds
    /// </summary>
    int32_t getLength() const;
        void setLength(int32_t value);
    /// <summary>
    /// The country of the media. Typically a url. Cannot be blank
    /// </summary>
    utility::string_t getLocation() const;
        void setLocation(utility::string_t value);
    /// <summary>
    /// The user friendly name of that resource. Defaults to blank string
    /// </summary>
    utility::string_t getLongDescription() const;
    bool longDescriptionIsSet() const;
    void unsetLong_description();
    void setLongDescription(utility::string_t value);
    /// <summary>
    /// The mime-type of the media
    /// </summary>
    utility::string_t getMimeType() const;
    bool mimeTypeIsSet() const;
    void unsetMime_type();
    void setMimeType(utility::string_t value);
    /// <summary>
    /// The user friendly name of that resource
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// The sort order of the video. default: 100
    /// </summary>
    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetPriority();
    void setPriority(int32_t value);
    /// <summary>
    /// The privacy setting. default: private
    /// </summary>
    utility::string_t getPrivacy() const;
    bool privacyIsSet() const;
    void unsetPrivacy();
    void setPrivacy(utility::string_t value);
    /// <summary>
    /// Whether the video has been made public. Default true
    /// </summary>
    bool getPublished() const;
    bool publishedIsSet() const;
    void unsetPublished();
    void setPublished(bool value);
    /// <summary>
    /// The user friendly name of that resource. Defaults to blank string
    /// </summary>
    utility::string_t getShortDescription() const;
    bool shortDescriptionIsSet() const;
    void unsetShort_description();
    void setShortDescription(utility::string_t value);
    /// <summary>
    /// The size of the media. Minimum 0 if supplied
    /// </summary>
    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetSize();
    void setSize(int64_t value);
    /// <summary>
    /// The tags for the video
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();
    void setTags(std::vector<utility::string_t> value);
    /// <summary>
    /// A video template this video is validated against (private). May be null and no validation of additional_properties will be done
    /// </summary>
    utility::string_t getTemplate() const;
    bool templateIsSet() const;
    void unsetTemplate();
    void setTemplate(utility::string_t value);
    /// <summary>
    /// The country of a thumbnail version. Typically a url
    /// </summary>
    utility::string_t getThumbnail() const;
    bool thumbnailIsSet() const;
    void unsetThumbnail();
    void setThumbnail(utility::string_t value);
    /// <summary>
    /// The date/time this resource was last updated in seconds since unix epoch
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);
    /// <summary>
    /// The user the media was uploaded by. May be null for system uploaded media. May only be set to a user other than the current caller if VIDEOS_ADMIN permission. Null will mean the caller is the uploader unless the caller has VIDEOS_ADMIN permission, in which case it will be set to null
    /// </summary>
    std::shared_ptr<SimpleUserResource> getUploader() const;
    bool uploaderIsSet() const;
    void unsetUploader();
    void setUploader(std::shared_ptr<SimpleUserResource> value);
    /// <summary>
    /// The view count of the video
    /// </summary>
    int64_t getViews() const;
    bool viewsIsSet() const;
    void unsetViews();
    void setViews(int64_t value);
    /// <summary>
    /// The width of the video in px
    /// </summary>
    int32_t getWidth() const;
        void setWidth(int32_t value);

protected:
    bool m_Active;
    bool m_ActiveIsSet;
    std::map<utility::string_t, std::shared_ptr<Property>> m_Additional_properties;
    bool m_Additional_propertiesIsSet;
    std::shared_ptr<SimpleReferenceResource«long»> m_Author;
    bool m_AuthorIsSet;
    int64_t m_Authored;
    bool m_AuthoredIsSet;
    bool m_Banned;
    bool m_BannedIsSet;
    std::shared_ptr<SimpleReferenceResource«string»> m_Category;
        std::vector<std::shared_ptr<CommentResource>> m_Comments;
    bool m_CommentsIsSet;
    std::vector<std::shared_ptr<ContributionResource>> m_Contributors;
    bool m_ContributorsIsSet;
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
    utility::string_t m_Embed;
    bool m_EmbedIsSet;
    utility::string_t m_Extension;
        int32_t m_Height;
        int64_t m_Id;
    bool m_IdIsSet;
    int32_t m_Length;
        utility::string_t m_Location;
        utility::string_t m_Long_description;
    bool m_Long_descriptionIsSet;
    utility::string_t m_Mime_type;
    bool m_Mime_typeIsSet;
    utility::string_t m_Name;
        int32_t m_Priority;
    bool m_PriorityIsSet;
    utility::string_t m_Privacy;
    bool m_PrivacyIsSet;
    bool m_Published;
    bool m_PublishedIsSet;
    utility::string_t m_Short_description;
    bool m_Short_descriptionIsSet;
    int64_t m_Size;
    bool m_SizeIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    utility::string_t m_Template;
    bool m_TemplateIsSet;
    utility::string_t m_Thumbnail;
    bool m_ThumbnailIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
    std::shared_ptr<SimpleUserResource> m_Uploader;
    bool m_UploaderIsSet;
    int64_t m_Views;
    bool m_ViewsIsSet;
    int32_t m_Width;
    };

}
}
}
}

#endif /* VideoResource_H_ */
