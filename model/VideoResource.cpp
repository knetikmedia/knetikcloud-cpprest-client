/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "VideoResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

VideoResource::VideoResource()
{
    m_Active = false;
    m_ActiveIsSet = false;
    m_AuthorIsSet = false;
    m_Authored = 0;
    m_AuthoredIsSet = false;
    m_Banned = false;
    m_BannedIsSet = false;
    m_CommentsIsSet = false;
    m_ContributorsIsSet = false;
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Embed = U("");
    m_EmbedIsSet = false;
    m_Extension = U("");
    m_Height = 0;
    m_Id = 0;
    m_IdIsSet = false;
    m_Length = 0;
    m_Location = U("");
    m_Long_description = U("");
    m_Long_descriptionIsSet = false;
    m_Mime_type = U("");
    m_Mime_typeIsSet = false;
    m_Name = U("");
    m_Priority = 0;
    m_PriorityIsSet = false;
    m_Privacy = U("");
    m_PrivacyIsSet = false;
    m_Published = false;
    m_PublishedIsSet = false;
    m_Short_description = U("");
    m_Short_descriptionIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_TagsIsSet = false;
    m_Thumbnail = U("");
    m_ThumbnailIsSet = false;
    m_Updated_date = 0;
    m_Updated_dateIsSet = false;
    m_UploaderIsSet = false;
    m_Views = 0;
    m_ViewsIsSet = false;
    m_Width = 0;
    
}

VideoResource::~VideoResource()
{
}

void VideoResource::validate()
{
    // TODO: implement validation
}

web::json::value VideoResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ActiveIsSet)
    {
        val[U("active")] = ModelBase::toJson(m_Active);
    }
    if(m_AuthorIsSet)
    {
        val[U("author")] = ModelBase::toJson(m_Author);
    }
    if(m_AuthoredIsSet)
    {
        val[U("authored")] = ModelBase::toJson(m_Authored);
    }
    if(m_BannedIsSet)
    {
        val[U("banned")] = ModelBase::toJson(m_Banned);
    }
    val[U("category")] = ModelBase::toJson(m_Category);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Comments )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("comments")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Contributors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("contributors")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_EmbedIsSet)
    {
        val[U("embed")] = ModelBase::toJson(m_Embed);
    }
    val[U("extension")] = ModelBase::toJson(m_Extension);
    val[U("height")] = ModelBase::toJson(m_Height);
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("length")] = ModelBase::toJson(m_Length);
    val[U("location")] = ModelBase::toJson(m_Location);
    if(m_Long_descriptionIsSet)
    {
        val[U("long_description")] = ModelBase::toJson(m_Long_description);
    }
    if(m_Mime_typeIsSet)
    {
        val[U("mime_type")] = ModelBase::toJson(m_Mime_type);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_PriorityIsSet)
    {
        val[U("priority")] = ModelBase::toJson(m_Priority);
    }
    if(m_PrivacyIsSet)
    {
        val[U("privacy")] = ModelBase::toJson(m_Privacy);
    }
    if(m_PublishedIsSet)
    {
        val[U("published")] = ModelBase::toJson(m_Published);
    }
    if(m_Short_descriptionIsSet)
    {
        val[U("short_description")] = ModelBase::toJson(m_Short_description);
    }
    if(m_SizeIsSet)
    {
        val[U("size")] = ModelBase::toJson(m_Size);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("tags")] = web::json::value::array(jsonArray);
        }
    }
    if(m_ThumbnailIsSet)
    {
        val[U("thumbnail")] = ModelBase::toJson(m_Thumbnail);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    if(m_UploaderIsSet)
    {
        val[U("uploader")] = ModelBase::toJson(m_Uploader);
    }
    if(m_ViewsIsSet)
    {
        val[U("views")] = ModelBase::toJson(m_Views);
    }
    val[U("width")] = ModelBase::toJson(m_Width);
    

    return val;
}

void VideoResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("active")))
    {
        setActive(ModelBase::boolFromJson(val[U("active")]));
    }
    if(val.has_field(U("author")))
    {
        if(!val[U("author")].is_null())
        {
            std::shared_ptr<SimpleReferenceResource«long»> newItem(new SimpleReferenceResource«long»());
            newItem->fromJson(val[U("author")]);
            setAuthor( newItem );
        }
        
    }
    if(val.has_field(U("authored")))
    {
        setAuthored(ModelBase::int64_tFromJson(val[U("authored")]));
    }
    if(val.has_field(U("banned")))
    {
        setBanned(ModelBase::boolFromJson(val[U("banned")]));
    }
    std::shared_ptr<SimpleReferenceResource«string»> newCategory(new SimpleReferenceResource«string»());
    newCategory->fromJson(val[U("category")]);
    setCategory( newItem );
    {
        m_Comments.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("comments")))
        {
        for( auto& item : val[U("comments")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Comments.push_back( std::shared_ptr<CommentResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<CommentResource> newItem(new CommentResource());
                newItem->fromJson(item);
                m_Comments.push_back( newItem );
            }
            
        }
        }
    }
    {
        m_Contributors.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("contributors")))
        {
        for( auto& item : val[U("contributors")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Contributors.push_back( std::shared_ptr<ContributionResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<ContributionResource> newItem(new ContributionResource());
                newItem->fromJson(item);
                m_Contributors.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("embed")))
    {
        setEmbed(ModelBase::stringFromJson(val[U("embed")]));
        
    }
    setExtension(ModelBase::stringFromJson(val[U("extension")]));
    setHeight(ModelBase::int32_tFromJson(val[U("height")]));
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    setLength(ModelBase::int32_tFromJson(val[U("length")]));
    setLocation(ModelBase::stringFromJson(val[U("location")]));
    if(val.has_field(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromJson(val[U("long_description")]));
        
    }
    if(val.has_field(U("mime_type")))
    {
        setMimeType(ModelBase::stringFromJson(val[U("mime_type")]));
        
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("priority")))
    {
        setPriority(ModelBase::int32_tFromJson(val[U("priority")]));
    }
    if(val.has_field(U("privacy")))
    {
        setPrivacy(ModelBase::stringFromJson(val[U("privacy")]));
        
    }
    if(val.has_field(U("published")))
    {
        setPublished(ModelBase::boolFromJson(val[U("published")]));
    }
    if(val.has_field(U("short_description")))
    {
        setShortDescription(ModelBase::stringFromJson(val[U("short_description")]));
        
    }
    if(val.has_field(U("size")))
    {
        setSize(ModelBase::int64_tFromJson(val[U("size")]));
    }
    {
        m_Tags.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("tags")))
        {
        for( auto& item : val[U("tags")].as_array() )
        {
            m_Tags.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(val.has_field(U("thumbnail")))
    {
        setThumbnail(ModelBase::stringFromJson(val[U("thumbnail")]));
        
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
    if(val.has_field(U("uploader")))
    {
        if(!val[U("uploader")].is_null())
        {
            std::shared_ptr<SimpleUserResource> newItem(new SimpleUserResource());
            newItem->fromJson(val[U("uploader")]);
            setUploader( newItem );
        }
        
    }
    if(val.has_field(U("views")))
    {
        setViews(ModelBase::int64_tFromJson(val[U("views")]));
    }
    setWidth(ModelBase::int32_tFromJson(val[U("width")]));
    
}

void VideoResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_ActiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("active"), m_Active));
    }
    if(m_AuthorIsSet)
    {
        if (m_Author.get())
        {
            m_Author->toMultipart(multipart, U("author."));
        }
        
    }
    if(m_AuthoredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("authored"), m_Authored));
    }
    if(m_BannedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("banned"), m_Banned));
    }
    m_Category->toMultipart(multipart, U("category."));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Comments )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("comments"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Contributors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("contributors"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_EmbedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("embed"), m_Embed));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("extension"), m_Extension));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("height"), m_Height));
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("length"), m_Length));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("location"), m_Location));
    if(m_Long_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("long_description"), m_Long_description));
        
    }
    if(m_Mime_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("mime_type"), m_Mime_type));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_PriorityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("priority"), m_Priority));
    }
    if(m_PrivacyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("privacy"), m_Privacy));
        
    }
    if(m_PublishedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("published"), m_Published));
    }
    if(m_Short_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("short_description"), m_Short_description));
        
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("size"), m_Size));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("tags"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_ThumbnailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("thumbnail"), m_Thumbnail));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    if(m_UploaderIsSet)
    {
        if (m_Uploader.get())
        {
            m_Uploader->toMultipart(multipart, U("uploader."));
        }
        
    }
    if(m_ViewsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("views"), m_Views));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("width"), m_Width));
    
}

void VideoResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("active")))
    {
        setActive(ModelBase::boolFromHttpContent(multipart->getContent(U("active"))));
    }
    if(multipart->hasContent(U("author")))
    {
        if(multipart->hasContent(U("author")))
        {
            std::shared_ptr<SimpleReferenceResource«long»> newItem(new SimpleReferenceResource«long»());
            newItem->fromMultiPart(multipart, U("author."));
            setAuthor( newItem );
        }
        
    }
    if(multipart->hasContent(U("authored")))
    {
        setAuthored(ModelBase::int64_tFromHttpContent(multipart->getContent(U("authored"))));
    }
    if(multipart->hasContent(U("banned")))
    {
        setBanned(ModelBase::boolFromHttpContent(multipart->getContent(U("banned"))));
    }
    std::shared_ptr<SimpleReferenceResource«string»> newCategory(new SimpleReferenceResource«string»());
    newCategory->fromMultiPart(multipart, U("category."));
    setCategory( newCategory );
    {
        m_Comments.clear();
        if(multipart->hasContent(U("comments")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("comments"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Comments.push_back( std::shared_ptr<CommentResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<CommentResource> newItem(new CommentResource());
                newItem->fromJson(item);
                m_Comments.push_back( newItem );
            }
            
        }
        }
    }
    {
        m_Contributors.clear();
        if(multipart->hasContent(U("contributors")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("contributors"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Contributors.push_back( std::shared_ptr<ContributionResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<ContributionResource> newItem(new ContributionResource());
                newItem->fromJson(item);
                m_Contributors.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("embed")))
    {
        setEmbed(ModelBase::stringFromHttpContent(multipart->getContent(U("embed"))));
        
    }
    setExtension(ModelBase::stringFromHttpContent(multipart->getContent(U("extension"))));
    setHeight(ModelBase::int32_tFromHttpContent(multipart->getContent(U("height"))));
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    setLength(ModelBase::int32_tFromHttpContent(multipart->getContent(U("length"))));
    setLocation(ModelBase::stringFromHttpContent(multipart->getContent(U("location"))));
    if(multipart->hasContent(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("long_description"))));
        
    }
    if(multipart->hasContent(U("mime_type")))
    {
        setMimeType(ModelBase::stringFromHttpContent(multipart->getContent(U("mime_type"))));
        
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("priority")))
    {
        setPriority(ModelBase::int32_tFromHttpContent(multipart->getContent(U("priority"))));
    }
    if(multipart->hasContent(U("privacy")))
    {
        setPrivacy(ModelBase::stringFromHttpContent(multipart->getContent(U("privacy"))));
        
    }
    if(multipart->hasContent(U("published")))
    {
        setPublished(ModelBase::boolFromHttpContent(multipart->getContent(U("published"))));
    }
    if(multipart->hasContent(U("short_description")))
    {
        setShortDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("short_description"))));
        
    }
    if(multipart->hasContent(U("size")))
    {
        setSize(ModelBase::int64_tFromHttpContent(multipart->getContent(U("size"))));
    }
    {
        m_Tags.clear();
        if(multipart->hasContent(U("tags")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("tags"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Tags.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(multipart->hasContent(U("thumbnail")))
    {
        setThumbnail(ModelBase::stringFromHttpContent(multipart->getContent(U("thumbnail"))));
        
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    if(multipart->hasContent(U("uploader")))
    {
        if(multipart->hasContent(U("uploader")))
        {
            std::shared_ptr<SimpleUserResource> newItem(new SimpleUserResource());
            newItem->fromMultiPart(multipart, U("uploader."));
            setUploader( newItem );
        }
        
    }
    if(multipart->hasContent(U("views")))
    {
        setViews(ModelBase::int64_tFromHttpContent(multipart->getContent(U("views"))));
    }
    setWidth(ModelBase::int32_tFromHttpContent(multipart->getContent(U("width"))));
    
}


bool VideoResource::getActive() const
{
    return m_Active;
}
void VideoResource::setActive(bool value)
{
    m_Active = value;
    m_ActiveIsSet = true;
}
bool VideoResource::activeIsSet() const
{
    return m_ActiveIsSet;
}
void VideoResource::unsetActive()
{
    m_ActiveIsSet = false;
}
std::shared_ptr<SimpleReferenceResource«long»> VideoResource::getAuthor() const
{
    return m_Author;
}
void VideoResource::setAuthor(std::shared_ptr<SimpleReferenceResource«long»> value)
{
    m_Author = value;
    m_AuthorIsSet = true;
}
bool VideoResource::authorIsSet() const
{
    return m_AuthorIsSet;
}
void VideoResource::unsetAuthor()
{
    m_AuthorIsSet = false;
}
int64_t VideoResource::getAuthored() const
{
    return m_Authored;
}
void VideoResource::setAuthored(int64_t value)
{
    m_Authored = value;
    m_AuthoredIsSet = true;
}
bool VideoResource::authoredIsSet() const
{
    return m_AuthoredIsSet;
}
void VideoResource::unsetAuthored()
{
    m_AuthoredIsSet = false;
}
bool VideoResource::getBanned() const
{
    return m_Banned;
}
void VideoResource::setBanned(bool value)
{
    m_Banned = value;
    m_BannedIsSet = true;
}
bool VideoResource::bannedIsSet() const
{
    return m_BannedIsSet;
}
void VideoResource::unsetBanned()
{
    m_BannedIsSet = false;
}
std::shared_ptr<SimpleReferenceResource«string»> VideoResource::getCategory() const
{
    return m_Category;
}
void VideoResource::setCategory(std::shared_ptr<SimpleReferenceResource«string»> value)
{
    m_Category = value;
    
}
std::vector<std::shared_ptr<CommentResource>>& VideoResource::getComments()
{
    return m_Comments;
}
bool VideoResource::commentsIsSet() const
{
    return m_CommentsIsSet;
}
void VideoResource::unsetComments()
{
    m_CommentsIsSet = false;
}
std::vector<std::shared_ptr<ContributionResource>>& VideoResource::getContributors()
{
    return m_Contributors;
}
bool VideoResource::contributorsIsSet() const
{
    return m_ContributorsIsSet;
}
void VideoResource::unsetContributors()
{
    m_ContributorsIsSet = false;
}
int64_t VideoResource::getCreatedDate() const
{
    return m_Created_date;
}
void VideoResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool VideoResource::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void VideoResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
utility::string_t VideoResource::getEmbed() const
{
    return m_Embed;
}
void VideoResource::setEmbed(utility::string_t value)
{
    m_Embed = value;
    m_EmbedIsSet = true;
}
bool VideoResource::embedIsSet() const
{
    return m_EmbedIsSet;
}
void VideoResource::unsetEmbed()
{
    m_EmbedIsSet = false;
}
utility::string_t VideoResource::getExtension() const
{
    return m_Extension;
}
void VideoResource::setExtension(utility::string_t value)
{
    m_Extension = value;
    
}
int32_t VideoResource::getHeight() const
{
    return m_Height;
}
void VideoResource::setHeight(int32_t value)
{
    m_Height = value;
    
}
int64_t VideoResource::getId() const
{
    return m_Id;
}
void VideoResource::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool VideoResource::idIsSet() const
{
    return m_IdIsSet;
}
void VideoResource::unsetId()
{
    m_IdIsSet = false;
}
int32_t VideoResource::getLength() const
{
    return m_Length;
}
void VideoResource::setLength(int32_t value)
{
    m_Length = value;
    
}
utility::string_t VideoResource::getLocation() const
{
    return m_Location;
}
void VideoResource::setLocation(utility::string_t value)
{
    m_Location = value;
    
}
utility::string_t VideoResource::getLongDescription() const
{
    return m_Long_description;
}
void VideoResource::setLongDescription(utility::string_t value)
{
    m_Long_description = value;
    m_Long_descriptionIsSet = true;
}
bool VideoResource::long_descriptionIsSet() const
{
    return m_Long_descriptionIsSet;
}
void VideoResource::unsetLong_description()
{
    m_Long_descriptionIsSet = false;
}
utility::string_t VideoResource::getMimeType() const
{
    return m_Mime_type;
}
void VideoResource::setMimeType(utility::string_t value)
{
    m_Mime_type = value;
    m_Mime_typeIsSet = true;
}
bool VideoResource::mime_typeIsSet() const
{
    return m_Mime_typeIsSet;
}
void VideoResource::unsetMime_type()
{
    m_Mime_typeIsSet = false;
}
utility::string_t VideoResource::getName() const
{
    return m_Name;
}
void VideoResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
int32_t VideoResource::getPriority() const
{
    return m_Priority;
}
void VideoResource::setPriority(int32_t value)
{
    m_Priority = value;
    m_PriorityIsSet = true;
}
bool VideoResource::priorityIsSet() const
{
    return m_PriorityIsSet;
}
void VideoResource::unsetPriority()
{
    m_PriorityIsSet = false;
}
utility::string_t VideoResource::getPrivacy() const
{
    return m_Privacy;
}
void VideoResource::setPrivacy(utility::string_t value)
{
    m_Privacy = value;
    m_PrivacyIsSet = true;
}
bool VideoResource::privacyIsSet() const
{
    return m_PrivacyIsSet;
}
void VideoResource::unsetPrivacy()
{
    m_PrivacyIsSet = false;
}
bool VideoResource::getPublished() const
{
    return m_Published;
}
void VideoResource::setPublished(bool value)
{
    m_Published = value;
    m_PublishedIsSet = true;
}
bool VideoResource::publishedIsSet() const
{
    return m_PublishedIsSet;
}
void VideoResource::unsetPublished()
{
    m_PublishedIsSet = false;
}
utility::string_t VideoResource::getShortDescription() const
{
    return m_Short_description;
}
void VideoResource::setShortDescription(utility::string_t value)
{
    m_Short_description = value;
    m_Short_descriptionIsSet = true;
}
bool VideoResource::short_descriptionIsSet() const
{
    return m_Short_descriptionIsSet;
}
void VideoResource::unsetShort_description()
{
    m_Short_descriptionIsSet = false;
}
int64_t VideoResource::getSize() const
{
    return m_Size;
}
void VideoResource::setSize(int64_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool VideoResource::sizeIsSet() const
{
    return m_SizeIsSet;
}
void VideoResource::unsetSize()
{
    m_SizeIsSet = false;
}
std::vector<utility::string_t>& VideoResource::getTags()
{
    return m_Tags;
}
bool VideoResource::tagsIsSet() const
{
    return m_TagsIsSet;
}
void VideoResource::unsetTags()
{
    m_TagsIsSet = false;
}
utility::string_t VideoResource::getThumbnail() const
{
    return m_Thumbnail;
}
void VideoResource::setThumbnail(utility::string_t value)
{
    m_Thumbnail = value;
    m_ThumbnailIsSet = true;
}
bool VideoResource::thumbnailIsSet() const
{
    return m_ThumbnailIsSet;
}
void VideoResource::unsetThumbnail()
{
    m_ThumbnailIsSet = false;
}
int64_t VideoResource::getUpdatedDate() const
{
    return m_Updated_date;
}
void VideoResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool VideoResource::updated_dateIsSet() const
{
    return m_Updated_dateIsSet;
}
void VideoResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}
std::shared_ptr<SimpleUserResource> VideoResource::getUploader() const
{
    return m_Uploader;
}
void VideoResource::setUploader(std::shared_ptr<SimpleUserResource> value)
{
    m_Uploader = value;
    m_UploaderIsSet = true;
}
bool VideoResource::uploaderIsSet() const
{
    return m_UploaderIsSet;
}
void VideoResource::unsetUploader()
{
    m_UploaderIsSet = false;
}
int64_t VideoResource::getViews() const
{
    return m_Views;
}
void VideoResource::setViews(int64_t value)
{
    m_Views = value;
    m_ViewsIsSet = true;
}
bool VideoResource::viewsIsSet() const
{
    return m_ViewsIsSet;
}
void VideoResource::unsetViews()
{
    m_ViewsIsSet = false;
}
int32_t VideoResource::getWidth() const
{
    return m_Width;
}
void VideoResource::setWidth(int32_t value)
{
    m_Width = value;
    
}

}
}
}
}
