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



#include "Video.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

Video::Video()
{
    m_Active = false;
    m_ActiveIsSet = false;
    m_AuthorIsSet = false;
    m_Authored = 0;
    m_AuthoredIsSet = false;
    m_Banned = false;
    m_BannedIsSet = false;
    m_Category_id = U("");
    m_Category_idIsSet = false;
    m_Category_name = U("");
    m_Category_nameIsSet = false;
    m_ContributorsIsSet = false;
    m_Created = 0;
    m_CreatedIsSet = false;
    m_Embed = U("");
    m_EmbedIsSet = false;
    m_Extension = U("");
    m_ExtensionIsSet = false;
    m_Height = 0;
    m_HeightIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Length = 0;
    m_LengthIsSet = false;
    m_Location = U("");
    m_LocationIsSet = false;
    m_Long_description = U("");
    m_Long_descriptionIsSet = false;
    m_Mime_type = U("");
    m_Mime_typeIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
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
    m_Updated = 0;
    m_UpdatedIsSet = false;
    m_UploaderIsSet = false;
    m_Views = 0;
    m_ViewsIsSet = false;
    m_WhitelistIsSet = false;
    m_Width = 0;
    m_WidthIsSet = false;
    
}

Video::~Video()
{
}

void Video::validate()
{
    // TODO: implement validation
}

web::json::value Video::toJson() const
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
    if(m_Category_idIsSet)
    {
        val[U("category_id")] = ModelBase::toJson(m_Category_id);
    }
    if(m_Category_nameIsSet)
    {
        val[U("category_name")] = ModelBase::toJson(m_Category_name);
    }
    if(m_ContributorsIsSet)
    {
        val[U("contributors")] = ModelBase::toJson(m_Contributors);
    }
    if(m_CreatedIsSet)
    {
        val[U("created")] = ModelBase::toJson(m_Created);
    }
    if(m_EmbedIsSet)
    {
        val[U("embed")] = ModelBase::toJson(m_Embed);
    }
    if(m_ExtensionIsSet)
    {
        val[U("extension")] = ModelBase::toJson(m_Extension);
    }
    if(m_HeightIsSet)
    {
        val[U("height")] = ModelBase::toJson(m_Height);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_LengthIsSet)
    {
        val[U("length")] = ModelBase::toJson(m_Length);
    }
    if(m_LocationIsSet)
    {
        val[U("location")] = ModelBase::toJson(m_Location);
    }
    if(m_Long_descriptionIsSet)
    {
        val[U("long_description")] = ModelBase::toJson(m_Long_description);
    }
    if(m_Mime_typeIsSet)
    {
        val[U("mime_type")] = ModelBase::toJson(m_Mime_type);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
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
    if(m_UpdatedIsSet)
    {
        val[U("updated")] = ModelBase::toJson(m_Updated);
    }
    if(m_UploaderIsSet)
    {
        val[U("uploader")] = ModelBase::toJson(m_Uploader);
    }
    if(m_ViewsIsSet)
    {
        val[U("views")] = ModelBase::toJson(m_Views);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Whitelist )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("whitelist")] = web::json::value::array(jsonArray);
        }
    }
    if(m_WidthIsSet)
    {
        val[U("width")] = ModelBase::toJson(m_Width);
    }
    

    return val;
}

void Video::fromJson(web::json::value& val)
{
    if(val.has_field(U("active")))
    {
        setActive(ModelBase::boolFromJson(val[U("active")]));
    }
    if(val.has_field(U("author")))
    {
        if(!val[U("author")].is_null())
        {
            std::shared_ptr<Artist> newItem(new Artist());
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
    if(val.has_field(U("category_id")))
    {
        setCategoryId(ModelBase::stringFromJson(val[U("category_id")]));
        
    }
    if(val.has_field(U("category_name")))
    {
        setCategoryName(ModelBase::stringFromJson(val[U("category_name")]));
        
    }
    if(val.has_field(U("contributors")))
    {
        if(!val[U("contributors")].is_null())
        {
            std::shared_ptr<Collection«VideoContribution»> newItem(new Collection«VideoContribution»());
            newItem->fromJson(val[U("contributors")]);
            setContributors( newItem );
        }
        
    }
    if(val.has_field(U("created")))
    {
        setCreated(ModelBase::int64_tFromJson(val[U("created")]));
    }
    if(val.has_field(U("embed")))
    {
        setEmbed(ModelBase::stringFromJson(val[U("embed")]));
        
    }
    if(val.has_field(U("extension")))
    {
        setExtension(ModelBase::stringFromJson(val[U("extension")]));
        
    }
    if(val.has_field(U("height")))
    {
        setHeight(ModelBase::int32_tFromJson(val[U("height")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("length")))
    {
        setLength(ModelBase::int32_tFromJson(val[U("length")]));
    }
    if(val.has_field(U("location")))
    {
        setLocation(ModelBase::stringFromJson(val[U("location")]));
        
    }
    if(val.has_field(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromJson(val[U("long_description")]));
        
    }
    if(val.has_field(U("mime_type")))
    {
        setMimeType(ModelBase::stringFromJson(val[U("mime_type")]));
        
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
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
            
            if(item.is_null())
            {
                m_Tags.push_back( std::shared_ptr<VideoTag>(nullptr) );
            }
            else
            {
                std::shared_ptr<VideoTag> newItem(new VideoTag());
                newItem->fromJson(item);
                m_Tags.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("thumbnail")))
    {
        setThumbnail(ModelBase::stringFromJson(val[U("thumbnail")]));
        
    }
    if(val.has_field(U("updated")))
    {
        setUpdated(ModelBase::int64_tFromJson(val[U("updated")]));
    }
    if(val.has_field(U("uploader")))
    {
        if(!val[U("uploader")].is_null())
        {
            std::shared_ptr<User> newItem(new User());
            newItem->fromJson(val[U("uploader")]);
            setUploader( newItem );
        }
        
    }
    if(val.has_field(U("views")))
    {
        setViews(ModelBase::int64_tFromJson(val[U("views")]));
    }
    {
        m_Whitelist.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("whitelist")))
        {
        for( auto& item : val[U("whitelist")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Whitelist.push_back( std::shared_ptr<User>(nullptr) );
            }
            else
            {
                std::shared_ptr<User> newItem(new User());
                newItem->fromJson(item);
                m_Whitelist.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("width")))
    {
        setWidth(ModelBase::int32_tFromJson(val[U("width")]));
    }
    
}

void Video::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Category_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("category_id"), m_Category_id));
        
    }
    if(m_Category_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("category_name"), m_Category_name));
        
    }
    if(m_ContributorsIsSet)
    {
        if (m_Contributors.get())
        {
            m_Contributors->toMultipart(multipart, U("contributors."));
        }
        
    }
    if(m_CreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created"), m_Created));
    }
    if(m_EmbedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("embed"), m_Embed));
        
    }
    if(m_ExtensionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("extension"), m_Extension));
        
    }
    if(m_HeightIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("height"), m_Height));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_LengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("length"), m_Length));
    }
    if(m_LocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("location"), m_Location));
        
    }
    if(m_Long_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("long_description"), m_Long_description));
        
    }
    if(m_Mime_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("mime_type"), m_Mime_type));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
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
    if(m_UpdatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated"), m_Updated));
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Whitelist )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("whitelist"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_WidthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("width"), m_Width));
    }
    
}

void Video::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
            std::shared_ptr<Artist> newItem(new Artist());
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
    if(multipart->hasContent(U("category_id")))
    {
        setCategoryId(ModelBase::stringFromHttpContent(multipart->getContent(U("category_id"))));
        
    }
    if(multipart->hasContent(U("category_name")))
    {
        setCategoryName(ModelBase::stringFromHttpContent(multipart->getContent(U("category_name"))));
        
    }
    if(multipart->hasContent(U("contributors")))
    {
        if(multipart->hasContent(U("contributors")))
        {
            std::shared_ptr<Collection«VideoContribution»> newItem(new Collection«VideoContribution»());
            newItem->fromMultiPart(multipart, U("contributors."));
            setContributors( newItem );
        }
        
    }
    if(multipart->hasContent(U("created")))
    {
        setCreated(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created"))));
    }
    if(multipart->hasContent(U("embed")))
    {
        setEmbed(ModelBase::stringFromHttpContent(multipart->getContent(U("embed"))));
        
    }
    if(multipart->hasContent(U("extension")))
    {
        setExtension(ModelBase::stringFromHttpContent(multipart->getContent(U("extension"))));
        
    }
    if(multipart->hasContent(U("height")))
    {
        setHeight(ModelBase::int32_tFromHttpContent(multipart->getContent(U("height"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("length")))
    {
        setLength(ModelBase::int32_tFromHttpContent(multipart->getContent(U("length"))));
    }
    if(multipart->hasContent(U("location")))
    {
        setLocation(ModelBase::stringFromHttpContent(multipart->getContent(U("location"))));
        
    }
    if(multipart->hasContent(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("long_description"))));
        
    }
    if(multipart->hasContent(U("mime_type")))
    {
        setMimeType(ModelBase::stringFromHttpContent(multipart->getContent(U("mime_type"))));
        
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
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
            
            if(item.is_null())
            {
                m_Tags.push_back( std::shared_ptr<VideoTag>(nullptr) );
            }
            else
            {
                std::shared_ptr<VideoTag> newItem(new VideoTag());
                newItem->fromJson(item);
                m_Tags.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("thumbnail")))
    {
        setThumbnail(ModelBase::stringFromHttpContent(multipart->getContent(U("thumbnail"))));
        
    }
    if(multipart->hasContent(U("updated")))
    {
        setUpdated(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated"))));
    }
    if(multipart->hasContent(U("uploader")))
    {
        if(multipart->hasContent(U("uploader")))
        {
            std::shared_ptr<User> newItem(new User());
            newItem->fromMultiPart(multipart, U("uploader."));
            setUploader( newItem );
        }
        
    }
    if(multipart->hasContent(U("views")))
    {
        setViews(ModelBase::int64_tFromHttpContent(multipart->getContent(U("views"))));
    }
    {
        m_Whitelist.clear();
        if(multipart->hasContent(U("whitelist")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("whitelist"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Whitelist.push_back( std::shared_ptr<User>(nullptr) );
            }
            else
            {
                std::shared_ptr<User> newItem(new User());
                newItem->fromJson(item);
                m_Whitelist.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("width")))
    {
        setWidth(ModelBase::int32_tFromHttpContent(multipart->getContent(U("width"))));
    }
    
}


bool Video::getActive() const
{
    return m_Active;
}
void Video::setActive(bool value)
{
    m_Active = value;
    m_ActiveIsSet = true;
}
bool Video::activeIsSet() const
{
    return m_ActiveIsSet;
}
void Video::unsetActive()
{
    m_ActiveIsSet = false;
}
std::shared_ptr<Artist> Video::getAuthor() const
{
    return m_Author;
}
void Video::setAuthor(std::shared_ptr<Artist> value)
{
    m_Author = value;
    m_AuthorIsSet = true;
}
bool Video::authorIsSet() const
{
    return m_AuthorIsSet;
}
void Video::unsetAuthor()
{
    m_AuthorIsSet = false;
}
int64_t Video::getAuthored() const
{
    return m_Authored;
}
void Video::setAuthored(int64_t value)
{
    m_Authored = value;
    m_AuthoredIsSet = true;
}
bool Video::authoredIsSet() const
{
    return m_AuthoredIsSet;
}
void Video::unsetAuthored()
{
    m_AuthoredIsSet = false;
}
bool Video::getBanned() const
{
    return m_Banned;
}
void Video::setBanned(bool value)
{
    m_Banned = value;
    m_BannedIsSet = true;
}
bool Video::bannedIsSet() const
{
    return m_BannedIsSet;
}
void Video::unsetBanned()
{
    m_BannedIsSet = false;
}
utility::string_t Video::getCategoryId() const
{
    return m_Category_id;
}
void Video::setCategoryId(utility::string_t value)
{
    m_Category_id = value;
    m_Category_idIsSet = true;
}
bool Video::category_idIsSet() const
{
    return m_Category_idIsSet;
}
void Video::unsetCategory_id()
{
    m_Category_idIsSet = false;
}
utility::string_t Video::getCategoryName() const
{
    return m_Category_name;
}
void Video::setCategoryName(utility::string_t value)
{
    m_Category_name = value;
    m_Category_nameIsSet = true;
}
bool Video::category_nameIsSet() const
{
    return m_Category_nameIsSet;
}
void Video::unsetCategory_name()
{
    m_Category_nameIsSet = false;
}
std::shared_ptr<Collection«VideoContribution»> Video::getContributors() const
{
    return m_Contributors;
}
void Video::setContributors(std::shared_ptr<Collection«VideoContribution»> value)
{
    m_Contributors = value;
    m_ContributorsIsSet = true;
}
bool Video::contributorsIsSet() const
{
    return m_ContributorsIsSet;
}
void Video::unsetContributors()
{
    m_ContributorsIsSet = false;
}
int64_t Video::getCreated() const
{
    return m_Created;
}
void Video::setCreated(int64_t value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}
bool Video::createdIsSet() const
{
    return m_CreatedIsSet;
}
void Video::unsetCreated()
{
    m_CreatedIsSet = false;
}
utility::string_t Video::getEmbed() const
{
    return m_Embed;
}
void Video::setEmbed(utility::string_t value)
{
    m_Embed = value;
    m_EmbedIsSet = true;
}
bool Video::embedIsSet() const
{
    return m_EmbedIsSet;
}
void Video::unsetEmbed()
{
    m_EmbedIsSet = false;
}
utility::string_t Video::getExtension() const
{
    return m_Extension;
}
void Video::setExtension(utility::string_t value)
{
    m_Extension = value;
    m_ExtensionIsSet = true;
}
bool Video::extensionIsSet() const
{
    return m_ExtensionIsSet;
}
void Video::unsetExtension()
{
    m_ExtensionIsSet = false;
}
int32_t Video::getHeight() const
{
    return m_Height;
}
void Video::setHeight(int32_t value)
{
    m_Height = value;
    m_HeightIsSet = true;
}
bool Video::heightIsSet() const
{
    return m_HeightIsSet;
}
void Video::unsetHeight()
{
    m_HeightIsSet = false;
}
int64_t Video::getId() const
{
    return m_Id;
}
void Video::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Video::idIsSet() const
{
    return m_IdIsSet;
}
void Video::unsetId()
{
    m_IdIsSet = false;
}
int32_t Video::getLength() const
{
    return m_Length;
}
void Video::setLength(int32_t value)
{
    m_Length = value;
    m_LengthIsSet = true;
}
bool Video::lengthIsSet() const
{
    return m_LengthIsSet;
}
void Video::unsetLength()
{
    m_LengthIsSet = false;
}
utility::string_t Video::getLocation() const
{
    return m_Location;
}
void Video::setLocation(utility::string_t value)
{
    m_Location = value;
    m_LocationIsSet = true;
}
bool Video::locationIsSet() const
{
    return m_LocationIsSet;
}
void Video::unsetLocation()
{
    m_LocationIsSet = false;
}
utility::string_t Video::getLongDescription() const
{
    return m_Long_description;
}
void Video::setLongDescription(utility::string_t value)
{
    m_Long_description = value;
    m_Long_descriptionIsSet = true;
}
bool Video::long_descriptionIsSet() const
{
    return m_Long_descriptionIsSet;
}
void Video::unsetLong_description()
{
    m_Long_descriptionIsSet = false;
}
utility::string_t Video::getMimeType() const
{
    return m_Mime_type;
}
void Video::setMimeType(utility::string_t value)
{
    m_Mime_type = value;
    m_Mime_typeIsSet = true;
}
bool Video::mime_typeIsSet() const
{
    return m_Mime_typeIsSet;
}
void Video::unsetMime_type()
{
    m_Mime_typeIsSet = false;
}
utility::string_t Video::getName() const
{
    return m_Name;
}
void Video::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Video::nameIsSet() const
{
    return m_NameIsSet;
}
void Video::unsetName()
{
    m_NameIsSet = false;
}
int32_t Video::getPriority() const
{
    return m_Priority;
}
void Video::setPriority(int32_t value)
{
    m_Priority = value;
    m_PriorityIsSet = true;
}
bool Video::priorityIsSet() const
{
    return m_PriorityIsSet;
}
void Video::unsetPriority()
{
    m_PriorityIsSet = false;
}
utility::string_t Video::getPrivacy() const
{
    return m_Privacy;
}
void Video::setPrivacy(utility::string_t value)
{
    m_Privacy = value;
    m_PrivacyIsSet = true;
}
bool Video::privacyIsSet() const
{
    return m_PrivacyIsSet;
}
void Video::unsetPrivacy()
{
    m_PrivacyIsSet = false;
}
bool Video::getPublished() const
{
    return m_Published;
}
void Video::setPublished(bool value)
{
    m_Published = value;
    m_PublishedIsSet = true;
}
bool Video::publishedIsSet() const
{
    return m_PublishedIsSet;
}
void Video::unsetPublished()
{
    m_PublishedIsSet = false;
}
utility::string_t Video::getShortDescription() const
{
    return m_Short_description;
}
void Video::setShortDescription(utility::string_t value)
{
    m_Short_description = value;
    m_Short_descriptionIsSet = true;
}
bool Video::short_descriptionIsSet() const
{
    return m_Short_descriptionIsSet;
}
void Video::unsetShort_description()
{
    m_Short_descriptionIsSet = false;
}
int64_t Video::getSize() const
{
    return m_Size;
}
void Video::setSize(int64_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool Video::sizeIsSet() const
{
    return m_SizeIsSet;
}
void Video::unsetSize()
{
    m_SizeIsSet = false;
}
std::vector<std::shared_ptr<VideoTag>>& Video::getTags()
{
    return m_Tags;
}
bool Video::tagsIsSet() const
{
    return m_TagsIsSet;
}
void Video::unsetTags()
{
    m_TagsIsSet = false;
}
utility::string_t Video::getThumbnail() const
{
    return m_Thumbnail;
}
void Video::setThumbnail(utility::string_t value)
{
    m_Thumbnail = value;
    m_ThumbnailIsSet = true;
}
bool Video::thumbnailIsSet() const
{
    return m_ThumbnailIsSet;
}
void Video::unsetThumbnail()
{
    m_ThumbnailIsSet = false;
}
int64_t Video::getUpdated() const
{
    return m_Updated;
}
void Video::setUpdated(int64_t value)
{
    m_Updated = value;
    m_UpdatedIsSet = true;
}
bool Video::updatedIsSet() const
{
    return m_UpdatedIsSet;
}
void Video::unsetUpdated()
{
    m_UpdatedIsSet = false;
}
std::shared_ptr<User> Video::getUploader() const
{
    return m_Uploader;
}
void Video::setUploader(std::shared_ptr<User> value)
{
    m_Uploader = value;
    m_UploaderIsSet = true;
}
bool Video::uploaderIsSet() const
{
    return m_UploaderIsSet;
}
void Video::unsetUploader()
{
    m_UploaderIsSet = false;
}
int64_t Video::getViews() const
{
    return m_Views;
}
void Video::setViews(int64_t value)
{
    m_Views = value;
    m_ViewsIsSet = true;
}
bool Video::viewsIsSet() const
{
    return m_ViewsIsSet;
}
void Video::unsetViews()
{
    m_ViewsIsSet = false;
}
std::vector<std::shared_ptr<User>>& Video::getWhitelist()
{
    return m_Whitelist;
}
bool Video::whitelistIsSet() const
{
    return m_WhitelistIsSet;
}
void Video::unsetWhitelist()
{
    m_WhitelistIsSet = false;
}
int32_t Video::getWidth() const
{
    return m_Width;
}
void Video::setWidth(int32_t value)
{
    m_Width = value;
    m_WidthIsSet = true;
}
bool Video::widthIsSet() const
{
    return m_WidthIsSet;
}
void Video::unsetWidth()
{
    m_WidthIsSet = false;
}

}
}
}
}

