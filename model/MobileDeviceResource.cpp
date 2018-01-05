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



#include "MobileDeviceResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

MobileDeviceResource::MobileDeviceResource()
{
    m_Authorization = U("");
    m_AuthorizationIsSet = false;
    m_Imei = U("");
    m_ImeiIsSet = false;
    m_Notification_platform = U("");
    m_Notification_platformIsSet = false;
    m_number = U("");
    m_numberIsSet = false;
}

MobileDeviceResource::~MobileDeviceResource()
{
}

void MobileDeviceResource::validate()
{
    // TODO: implement validation
}

web::json::value MobileDeviceResource::toJson() const
{
    web::json::value val = this->DeviceResource::toJson();

    if(m_AuthorizationIsSet)
    {
        val[U("authorization")] = ModelBase::toJson(m_Authorization);
    }
    if(m_ImeiIsSet)
    {
        val[U("imei")] = ModelBase::toJson(m_Imei);
    }
    if(m_Notification_platformIsSet)
    {
        val[U("notification_platform")] = ModelBase::toJson(m_Notification_platform);
    }
    if(m_numberIsSet)
    {
        val[U("number")] = ModelBase::toJson(m_number);
    }

    return val;
}

void MobileDeviceResource::fromJson(web::json::value& val)
{
    this->DeviceResource::fromJson(val);

    if(val.has_field(U("authorization")))
    {
        setAuthorization(ModelBase::stringFromJson(val[U("authorization")]));
    }
    if(val.has_field(U("imei")))
    {
        setImei(ModelBase::stringFromJson(val[U("imei")]));
    }
    if(val.has_field(U("notification_platform")))
    {
        setNotificationPlatform(ModelBase::stringFromJson(val[U("notification_platform")]));
    }
    if(val.has_field(U("number")))
    {
        setNumber(ModelBase::stringFromJson(val[U("number")]));
    }
}

void MobileDeviceResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_Device_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("device_type"), m_Device_type));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_LocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("location"), m_Location));
        
    }
    if(m_Mac_addressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("mac_address"), m_Mac_address));
        
    }
    if(m_MakeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("make"), m_Make));
        
    }
    if(m_ModelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("model"), m_Model));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_OsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("os"), m_Os));
        
    }
    if(m_OwnerIsSet)
    {
        if (m_Owner.get())
        {
            m_Owner->toMultipart(multipart, U("owner."));
        }
        
    }
    if(m_SerialIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("serial"), m_Serial));
        
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
    if(m_TemplateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("template"), m_Template));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Users )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("users"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_AuthorizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("authorization"), m_Authorization));
        
    }
    if(m_ImeiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("imei"), m_Imei));
        
    }
    if(m_Notification_platformIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("notification_platform"), m_Notification_platform));
        
    }
    if(m_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("number"), m_number));
        
    }
}

void MobileDeviceResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
    if(multipart->hasContent(U("device_type")))
    {
        setDeviceType(ModelBase::stringFromHttpContent(multipart->getContent(U("device_type"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("location")))
    {
        setLocation(ModelBase::stringFromHttpContent(multipart->getContent(U("location"))));
    }
    if(multipart->hasContent(U("mac_address")))
    {
        setMacAddress(ModelBase::stringFromHttpContent(multipart->getContent(U("mac_address"))));
    }
    if(multipart->hasContent(U("make")))
    {
        setMake(ModelBase::stringFromHttpContent(multipart->getContent(U("make"))));
    }
    if(multipart->hasContent(U("model")))
    {
        setModel(ModelBase::stringFromHttpContent(multipart->getContent(U("model"))));
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    }
    if(multipart->hasContent(U("os")))
    {
        setOs(ModelBase::stringFromHttpContent(multipart->getContent(U("os"))));
    }
    if(multipart->hasContent(U("owner")))
    {
        if(multipart->hasContent(U("owner")))
        {
            std::shared_ptr<SimpleUserResource> newItem(new SimpleUserResource());
            newItem->fromMultiPart(multipart, U("owner."));
            setOwner( newItem );
        }
    }
    if(multipart->hasContent(U("serial")))
    {
        setSerial(ModelBase::stringFromHttpContent(multipart->getContent(U("serial"))));
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
    if(multipart->hasContent(U("template")))
    {
        setTemplate(ModelBase::stringFromHttpContent(multipart->getContent(U("template"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    {
        m_Users.clear();
        if(multipart->hasContent(U("users")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("users"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Users.push_back( std::shared_ptr<SimpleUserResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<SimpleUserResource> newItem(new SimpleUserResource());
                newItem->fromJson(item);
                m_Users.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("authorization")))
    {
        setAuthorization(ModelBase::stringFromHttpContent(multipart->getContent(U("authorization"))));
    }
    if(multipart->hasContent(U("imei")))
    {
        setImei(ModelBase::stringFromHttpContent(multipart->getContent(U("imei"))));
    }
    if(multipart->hasContent(U("notification_platform")))
    {
        setNotificationPlatform(ModelBase::stringFromHttpContent(multipart->getContent(U("notification_platform"))));
    }
    if(multipart->hasContent(U("number")))
    {
        setNumber(ModelBase::stringFromHttpContent(multipart->getContent(U("number"))));
    }
}

utility::string_t MobileDeviceResource::getAuthorization() const
{
    return m_Authorization;
}


void MobileDeviceResource::setAuthorization(utility::string_t value)
{
    m_Authorization = value;
    m_AuthorizationIsSet = true;
}
bool MobileDeviceResource::authorizationIsSet() const
{
    return m_AuthorizationIsSet;
}

void MobileDeviceResource::unsetAuthorization()
{
    m_AuthorizationIsSet = false;
}

utility::string_t MobileDeviceResource::getImei() const
{
    return m_Imei;
}


void MobileDeviceResource::setImei(utility::string_t value)
{
    m_Imei = value;
    m_ImeiIsSet = true;
}
bool MobileDeviceResource::imeiIsSet() const
{
    return m_ImeiIsSet;
}

void MobileDeviceResource::unsetImei()
{
    m_ImeiIsSet = false;
}

utility::string_t MobileDeviceResource::getNotificationPlatform() const
{
    return m_Notification_platform;
}


void MobileDeviceResource::setNotificationPlatform(utility::string_t value)
{
    m_Notification_platform = value;
    m_Notification_platformIsSet = true;
}
bool MobileDeviceResource::notificationPlatformIsSet() const
{
    return m_Notification_platformIsSet;
}

void MobileDeviceResource::unsetNotification_platform()
{
    m_Notification_platformIsSet = false;
}

utility::string_t MobileDeviceResource::getNumber() const
{
    return m_number;
}


void MobileDeviceResource::setNumber(utility::string_t value)
{
    m_number = value;
    m_numberIsSet = true;
}
bool MobileDeviceResource::numberIsSet() const
{
    return m_numberIsSet;
}

void MobileDeviceResource::unsetnumber()
{
    m_numberIsSet = false;
}

}
}
}
}
