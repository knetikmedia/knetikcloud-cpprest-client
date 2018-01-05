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



#include "GroupMemberResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

GroupMemberResource::GroupMemberResource()
{
    m_Additional_propertiesIsSet = false;
    m_GroupIsSet = false;
    m_Implicit = false;
    m_ImplicitIsSet = false;
    m_Membership_id = 0L;
    m_Membership_idIsSet = false;
    m_Order = U("");
    m_OrderIsSet = false;
    m_Status = U("");
    m_StatusIsSet = false;
    m_Template = U("");
    m_TemplateIsSet = false;
}

GroupMemberResource::~GroupMemberResource()
{
}

void GroupMemberResource::validate()
{
    // TODO: implement validation
}

web::json::value GroupMemberResource::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Additional_properties )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        if(jsonArray.size() > 0)
        {
            val[U("additional_properties")] = web::json::value::array(jsonArray);
        }
    }
    if(m_GroupIsSet)
    {
        val[U("group")] = ModelBase::toJson(m_Group);
    }
    if(m_ImplicitIsSet)
    {
        val[U("implicit")] = ModelBase::toJson(m_Implicit);
    }
    if(m_Membership_idIsSet)
    {
        val[U("membership_id")] = ModelBase::toJson(m_Membership_id);
    }
    if(m_OrderIsSet)
    {
        val[U("order")] = ModelBase::toJson(m_Order);
    }
    if(m_StatusIsSet)
    {
        val[U("status")] = ModelBase::toJson(m_Status);
    }
    if(m_TemplateIsSet)
    {
        val[U("template")] = ModelBase::toJson(m_Template);
    }
    val[U("user")] = ModelBase::toJson(m_User);

    return val;
}

void GroupMemberResource::fromJson(web::json::value& val)
{
    {
        m_Additional_properties.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("additional_properties")))
        {
        for( auto& item : val[U("additional_properties")].as_array() )
        {  
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(item.is_null())
            {
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, std::shared_ptr<Property>(nullptr) ));
            }
            else
            {
                std::shared_ptr<Property> newItem(new Property());
                newItem->fromJson(item[U("value")]);
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, newItem ));
            }
        }
        }
    }
    if(val.has_field(U("group")))
    {
        if(!val[U("group")].is_null())
        {
            std::shared_ptr<SimpleGroupResource> newItem(new SimpleGroupResource());
            newItem->fromJson(val[U("group")]);
            setGroup( newItem );
        }
    }
    if(val.has_field(U("implicit")))
    {
        setImplicit(ModelBase::boolFromJson(val[U("implicit")]));
    }
    if(val.has_field(U("membership_id")))
    {
        setMembershipId(ModelBase::int64_tFromJson(val[U("membership_id")]));
    }
    if(val.has_field(U("order")))
    {
        setOrder(ModelBase::stringFromJson(val[U("order")]));
    }
    if(val.has_field(U("status")))
    {
        setStatus(ModelBase::stringFromJson(val[U("status")]));
    }
    if(val.has_field(U("template")))
    {
        setTemplate(ModelBase::stringFromJson(val[U("template")]));
    }
    std::shared_ptr<SimpleUserResource> newUser(new SimpleUserResource());
    newUser->fromJson(val[U("user")]);
    setUser( newUser );
}

void GroupMemberResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Additional_properties )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("additional_properties"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_GroupIsSet)
    {
        if (m_Group.get())
        {
            m_Group->toMultipart(multipart, U("group."));
        }
        
    }
    if(m_ImplicitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("implicit"), m_Implicit));
    }
    if(m_Membership_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("membership_id"), m_Membership_id));
    }
    if(m_OrderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("order"), m_Order));
        
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
        
    }
    if(m_TemplateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("template"), m_Template));
        
    }
    m_User->toMultipart(multipart, U("user."));
}

void GroupMemberResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Additional_properties.clear();
        if(multipart->hasContent(U("additional_properties")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("additional_properties"))));
        for( auto& item : jsonArray.as_array() )
        {
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(item.is_null())
            {
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, std::shared_ptr<Property>(nullptr) ));
            }
            else
            {
                std::shared_ptr<Property> newItem(new Property());
                newItem->fromJson(item[U("value")]);
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, newItem ));
            }
        }
        }
    }
    if(multipart->hasContent(U("group")))
    {
        if(multipart->hasContent(U("group")))
        {
            std::shared_ptr<SimpleGroupResource> newItem(new SimpleGroupResource());
            newItem->fromMultiPart(multipart, U("group."));
            setGroup( newItem );
        }
    }
    if(multipart->hasContent(U("implicit")))
    {
        setImplicit(ModelBase::boolFromHttpContent(multipart->getContent(U("implicit"))));
    }
    if(multipart->hasContent(U("membership_id")))
    {
        setMembershipId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("membership_id"))));
    }
    if(multipart->hasContent(U("order")))
    {
        setOrder(ModelBase::stringFromHttpContent(multipart->getContent(U("order"))));
    }
    if(multipart->hasContent(U("status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
    }
    if(multipart->hasContent(U("template")))
    {
        setTemplate(ModelBase::stringFromHttpContent(multipart->getContent(U("template"))));
    }
    std::shared_ptr<SimpleUserResource> newUser(new SimpleUserResource());
    newUser->fromMultiPart(multipart, U("user."));
    setUser( newUser );
}

std::map<utility::string_t, std::shared_ptr<Property>>& GroupMemberResource::getAdditionalProperties()
{
    return m_Additional_properties;
}

void GroupMemberResource::setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value)
{
    m_Additional_properties = value;
    m_Additional_propertiesIsSet = true;
}
bool GroupMemberResource::additionalPropertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}

void GroupMemberResource::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}

std::shared_ptr<SimpleGroupResource> GroupMemberResource::getGroup() const
{
    return m_Group;
}


void GroupMemberResource::setGroup(std::shared_ptr<SimpleGroupResource> value)
{
    m_Group = value;
    m_GroupIsSet = true;
}
bool GroupMemberResource::groupIsSet() const
{
    return m_GroupIsSet;
}

void GroupMemberResource::unsetGroup()
{
    m_GroupIsSet = false;
}

bool GroupMemberResource::getImplicit() const
{
    return m_Implicit;
}


void GroupMemberResource::setImplicit(bool value)
{
    m_Implicit = value;
    m_ImplicitIsSet = true;
}
bool GroupMemberResource::implicitIsSet() const
{
    return m_ImplicitIsSet;
}

void GroupMemberResource::unsetImplicit()
{
    m_ImplicitIsSet = false;
}

int64_t GroupMemberResource::getMembershipId() const
{
    return m_Membership_id;
}


void GroupMemberResource::setMembershipId(int64_t value)
{
    m_Membership_id = value;
    m_Membership_idIsSet = true;
}
bool GroupMemberResource::membershipIdIsSet() const
{
    return m_Membership_idIsSet;
}

void GroupMemberResource::unsetMembership_id()
{
    m_Membership_idIsSet = false;
}

utility::string_t GroupMemberResource::getOrder() const
{
    return m_Order;
}


void GroupMemberResource::setOrder(utility::string_t value)
{
    m_Order = value;
    m_OrderIsSet = true;
}
bool GroupMemberResource::orderIsSet() const
{
    return m_OrderIsSet;
}

void GroupMemberResource::unsetOrder()
{
    m_OrderIsSet = false;
}

utility::string_t GroupMemberResource::getStatus() const
{
    return m_Status;
}


void GroupMemberResource::setStatus(utility::string_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool GroupMemberResource::statusIsSet() const
{
    return m_StatusIsSet;
}

void GroupMemberResource::unsetStatus()
{
    m_StatusIsSet = false;
}

utility::string_t GroupMemberResource::getTemplate() const
{
    return m_Template;
}


void GroupMemberResource::setTemplate(utility::string_t value)
{
    m_Template = value;
    m_TemplateIsSet = true;
}
bool GroupMemberResource::templateIsSet() const
{
    return m_TemplateIsSet;
}

void GroupMemberResource::unsetTemplate()
{
    m_TemplateIsSet = false;
}

std::shared_ptr<SimpleUserResource> GroupMemberResource::getUser() const
{
    return m_User;
}


void GroupMemberResource::setUser(std::shared_ptr<SimpleUserResource> value)
{
    m_User = value;
    
}
}
}
}
}

