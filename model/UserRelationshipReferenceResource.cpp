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



#include "UserRelationshipReferenceResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UserRelationshipReferenceResource::UserRelationshipReferenceResource()
{
    m_Avatar_url = U("");
    m_Avatar_urlIsSet = false;
    m_Context = U("");
    m_ContextIsSet = false;
    m_Display_name = U("");
    m_Display_nameIsSet = false;
    m_Id = 0;
    m_Relationship_id = 0;
    m_Relationship_idIsSet = false;
    m_Username = U("");
    m_UsernameIsSet = false;
    
}

UserRelationshipReferenceResource::~UserRelationshipReferenceResource()
{
}

void UserRelationshipReferenceResource::validate()
{
    // TODO: implement validation
}

web::json::value UserRelationshipReferenceResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Avatar_urlIsSet)
    {
        val[U("avatar_url")] = ModelBase::toJson(m_Avatar_url);
    }
    if(m_ContextIsSet)
    {
        val[U("context")] = ModelBase::toJson(m_Context);
    }
    if(m_Display_nameIsSet)
    {
        val[U("display_name")] = ModelBase::toJson(m_Display_name);
    }
    val[U("id")] = ModelBase::toJson(m_Id);
    if(m_Relationship_idIsSet)
    {
        val[U("relationship_id")] = ModelBase::toJson(m_Relationship_id);
    }
    if(m_UsernameIsSet)
    {
        val[U("username")] = ModelBase::toJson(m_Username);
    }
    

    return val;
}

void UserRelationshipReferenceResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("avatar_url")))
    {
        setAvatarUrl(ModelBase::stringFromJson(val[U("avatar_url")]));
        
    }
    if(val.has_field(U("context")))
    {
        setContext(ModelBase::stringFromJson(val[U("context")]));
        
    }
    if(val.has_field(U("display_name")))
    {
        setDisplayName(ModelBase::stringFromJson(val[U("display_name")]));
        
    }
    setId(ModelBase::int32_tFromJson(val[U("id")]));
    if(val.has_field(U("relationship_id")))
    {
        setRelationshipId(ModelBase::int64_tFromJson(val[U("relationship_id")]));
    }
    if(val.has_field(U("username")))
    {
        setUsername(ModelBase::stringFromJson(val[U("username")]));
        
    }
    
}

void UserRelationshipReferenceResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Avatar_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("avatar_url"), m_Avatar_url));
        
    }
    if(m_ContextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("context"), m_Context));
        
    }
    if(m_Display_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("display_name"), m_Display_name));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    if(m_Relationship_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("relationship_id"), m_Relationship_id));
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("username"), m_Username));
        
    }
    
}

void UserRelationshipReferenceResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("avatar_url")))
    {
        setAvatarUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("avatar_url"))));
        
    }
    if(multipart->hasContent(U("context")))
    {
        setContext(ModelBase::stringFromHttpContent(multipart->getContent(U("context"))));
        
    }
    if(multipart->hasContent(U("display_name")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(U("display_name"))));
        
    }
    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    if(multipart->hasContent(U("relationship_id")))
    {
        setRelationshipId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("relationship_id"))));
    }
    if(multipart->hasContent(U("username")))
    {
        setUsername(ModelBase::stringFromHttpContent(multipart->getContent(U("username"))));
        
    }
    
}


utility::string_t UserRelationshipReferenceResource::getAvatarUrl() const
{
    return m_Avatar_url;
}
void UserRelationshipReferenceResource::setAvatarUrl(utility::string_t value)
{
    m_Avatar_url = value;
    m_Avatar_urlIsSet = true;
}
bool UserRelationshipReferenceResource::avatar_urlIsSet() const
{
    return m_Avatar_urlIsSet;
}
void UserRelationshipReferenceResource::unsetAvatar_url()
{
    m_Avatar_urlIsSet = false;
}
utility::string_t UserRelationshipReferenceResource::getContext() const
{
    return m_Context;
}
void UserRelationshipReferenceResource::setContext(utility::string_t value)
{
    m_Context = value;
    m_ContextIsSet = true;
}
bool UserRelationshipReferenceResource::contextIsSet() const
{
    return m_ContextIsSet;
}
void UserRelationshipReferenceResource::unsetContext()
{
    m_ContextIsSet = false;
}
utility::string_t UserRelationshipReferenceResource::getDisplayName() const
{
    return m_Display_name;
}
void UserRelationshipReferenceResource::setDisplayName(utility::string_t value)
{
    m_Display_name = value;
    m_Display_nameIsSet = true;
}
bool UserRelationshipReferenceResource::display_nameIsSet() const
{
    return m_Display_nameIsSet;
}
void UserRelationshipReferenceResource::unsetDisplay_name()
{
    m_Display_nameIsSet = false;
}
int32_t UserRelationshipReferenceResource::getId() const
{
    return m_Id;
}
void UserRelationshipReferenceResource::setId(int32_t value)
{
    m_Id = value;
    
}
int64_t UserRelationshipReferenceResource::getRelationshipId() const
{
    return m_Relationship_id;
}
void UserRelationshipReferenceResource::setRelationshipId(int64_t value)
{
    m_Relationship_id = value;
    m_Relationship_idIsSet = true;
}
bool UserRelationshipReferenceResource::relationship_idIsSet() const
{
    return m_Relationship_idIsSet;
}
void UserRelationshipReferenceResource::unsetRelationship_id()
{
    m_Relationship_idIsSet = false;
}
utility::string_t UserRelationshipReferenceResource::getUsername() const
{
    return m_Username;
}
void UserRelationshipReferenceResource::setUsername(utility::string_t value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool UserRelationshipReferenceResource::usernameIsSet() const
{
    return m_UsernameIsSet;
}
void UserRelationshipReferenceResource::unsetUsername()
{
    m_UsernameIsSet = false;
}

}
}
}
}

