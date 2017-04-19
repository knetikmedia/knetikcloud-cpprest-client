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



#include "DeviceResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

DeviceResource::DeviceResource()
{
    m_Authorization = U("");
    m_AuthorizationIsSet = false;
    m_Condition = U("");
    m_ConditionIsSet = false;
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_DataIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Device_type = U("");
    m_Device_typeIsSet = false;
    m_Id = 0;
    m_Location = U("");
    m_LocationIsSet = false;
    m_Mac_address = U("");
    m_Mac_addressIsSet = false;
    m_Make = U("");
    m_MakeIsSet = false;
    m_Model = U("");
    m_ModelIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Os = U("");
    m_OsIsSet = false;
    m_Serial = U("");
    m_SerialIsSet = false;
    m_Status = U("");
    m_StatusIsSet = false;
    m_Updated_date = 0;
    m_Updated_dateIsSet = false;
    m_UserIsSet = false;
    
}

DeviceResource::~DeviceResource()
{
}

void DeviceResource::validate()
{
    // TODO: implement validation
}

web::json::value DeviceResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_AuthorizationIsSet)
    {
        val[U("authorization")] = ModelBase::toJson(m_Authorization);
    }
    if(m_ConditionIsSet)
    {
        val[U("condition")] = ModelBase::toJson(m_Condition);
    }
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_DataIsSet)
    {
        val[U("data")] = ModelBase::toJson(m_Data);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_Device_typeIsSet)
    {
        val[U("device_type")] = ModelBase::toJson(m_Device_type);
    }
    val[U("id")] = ModelBase::toJson(m_Id);
    if(m_LocationIsSet)
    {
        val[U("location")] = ModelBase::toJson(m_Location);
    }
    if(m_Mac_addressIsSet)
    {
        val[U("mac_address")] = ModelBase::toJson(m_Mac_address);
    }
    if(m_MakeIsSet)
    {
        val[U("make")] = ModelBase::toJson(m_Make);
    }
    if(m_ModelIsSet)
    {
        val[U("model")] = ModelBase::toJson(m_Model);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_OsIsSet)
    {
        val[U("os")] = ModelBase::toJson(m_Os);
    }
    if(m_SerialIsSet)
    {
        val[U("serial")] = ModelBase::toJson(m_Serial);
    }
    if(m_StatusIsSet)
    {
        val[U("status")] = ModelBase::toJson(m_Status);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    if(m_UserIsSet)
    {
        val[U("user")] = ModelBase::toJson(m_User);
    }
    

    return val;
}

void DeviceResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("authorization")))
    {
        setAuthorization(ModelBase::stringFromJson(val[U("authorization")]));
        
    }
    if(val.has_field(U("condition")))
    {
        setCondition(ModelBase::stringFromJson(val[U("condition")]));
        
    }
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("data")))
    {
        if(!val[U("data")].is_null())
        {
            std::map<utility::string_t, utility::string_t> newItem(std::map<utility::string_t, utility::string_t>());
            newItem->fromJson(val[U("data")]);
            setData( newItem );
        }
        
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
        
    }
    if(val.has_field(U("device_type")))
    {
        setDeviceType(ModelBase::stringFromJson(val[U("device_type")]));
        
    }
    setId(ModelBase::int32_tFromJson(val[U("id")]));
    if(val.has_field(U("location")))
    {
        setLocation(ModelBase::stringFromJson(val[U("location")]));
        
    }
    if(val.has_field(U("mac_address")))
    {
        setMacAddress(ModelBase::stringFromJson(val[U("mac_address")]));
        
    }
    if(val.has_field(U("make")))
    {
        setMake(ModelBase::stringFromJson(val[U("make")]));
        
    }
    if(val.has_field(U("model")))
    {
        setModel(ModelBase::stringFromJson(val[U("model")]));
        
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    if(val.has_field(U("os")))
    {
        setOs(ModelBase::stringFromJson(val[U("os")]));
        
    }
    if(val.has_field(U("serial")))
    {
        setSerial(ModelBase::stringFromJson(val[U("serial")]));
        
    }
    if(val.has_field(U("status")))
    {
        setStatus(ModelBase::stringFromJson(val[U("status")]));
        
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
    if(val.has_field(U("user")))
    {
        if(!val[U("user")].is_null())
        {
            std::shared_ptr<SimpleUserResource> newItem(new SimpleUserResource());
            newItem->fromJson(val[U("user")]);
            setUser( newItem );
        }
        
    }
    
}

void DeviceResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_AuthorizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("authorization"), m_Authorization));
        
    }
    if(m_ConditionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("condition"), m_Condition));
        
    }
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_DataIsSet)
    {
        if (m_Data.get())
        {
            m_Data->toMultipart(multipart, U("data."));
        }
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_Device_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("device_type"), m_Device_type));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
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
    if(m_SerialIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("serial"), m_Serial));
        
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    if(m_UserIsSet)
    {
        if (m_User.get())
        {
            m_User->toMultipart(multipart, U("user."));
        }
        
    }
    
}

void DeviceResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("authorization")))
    {
        setAuthorization(ModelBase::stringFromHttpContent(multipart->getContent(U("authorization"))));
        
    }
    if(multipart->hasContent(U("condition")))
    {
        setCondition(ModelBase::stringFromHttpContent(multipart->getContent(U("condition"))));
        
    }
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("data")))
    {
        if(multipart->hasContent(U("data")))
        {
            std::map<utility::string_t, utility::string_t> newItem(std::map<utility::string_t, utility::string_t>());
            newItem->fromMultiPart(multipart, U("data."));
            setData( newItem );
        }
        
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
        
    }
    if(multipart->hasContent(U("device_type")))
    {
        setDeviceType(ModelBase::stringFromHttpContent(multipart->getContent(U("device_type"))));
        
    }
    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
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
    if(multipart->hasContent(U("serial")))
    {
        setSerial(ModelBase::stringFromHttpContent(multipart->getContent(U("serial"))));
        
    }
    if(multipart->hasContent(U("status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
        
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    if(multipart->hasContent(U("user")))
    {
        if(multipart->hasContent(U("user")))
        {
            std::shared_ptr<SimpleUserResource> newItem(new SimpleUserResource());
            newItem->fromMultiPart(multipart, U("user."));
            setUser( newItem );
        }
        
    }
    
}


utility::string_t DeviceResource::getAuthorization() const
{
    return m_Authorization;
}
void DeviceResource::setAuthorization(utility::string_t value)
{
    m_Authorization = value;
    m_AuthorizationIsSet = true;
}
bool DeviceResource::authorizationIsSet() const
{
    return m_AuthorizationIsSet;
}
void DeviceResource::unsetAuthorization()
{
    m_AuthorizationIsSet = false;
}
utility::string_t DeviceResource::getCondition() const
{
    return m_Condition;
}
void DeviceResource::setCondition(utility::string_t value)
{
    m_Condition = value;
    m_ConditionIsSet = true;
}
bool DeviceResource::conditionIsSet() const
{
    return m_ConditionIsSet;
}
void DeviceResource::unsetCondition()
{
    m_ConditionIsSet = false;
}
int64_t DeviceResource::getCreatedDate() const
{
    return m_Created_date;
}
void DeviceResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool DeviceResource::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void DeviceResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
std::map<utility::string_t, utility::string_t>& DeviceResource::getData()
{
    return m_Data;
}
bool DeviceResource::dataIsSet() const
{
    return m_DataIsSet;
}
void DeviceResource::unsetData()
{
    m_DataIsSet = false;
}
utility::string_t DeviceResource::getDescription() const
{
    return m_Description;
}
void DeviceResource::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool DeviceResource::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void DeviceResource::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t DeviceResource::getDeviceType() const
{
    return m_Device_type;
}
void DeviceResource::setDeviceType(utility::string_t value)
{
    m_Device_type = value;
    m_Device_typeIsSet = true;
}
bool DeviceResource::device_typeIsSet() const
{
    return m_Device_typeIsSet;
}
void DeviceResource::unsetDevice_type()
{
    m_Device_typeIsSet = false;
}
int32_t DeviceResource::getId() const
{
    return m_Id;
}
void DeviceResource::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t DeviceResource::getLocation() const
{
    return m_Location;
}
void DeviceResource::setLocation(utility::string_t value)
{
    m_Location = value;
    m_LocationIsSet = true;
}
bool DeviceResource::locationIsSet() const
{
    return m_LocationIsSet;
}
void DeviceResource::unsetLocation()
{
    m_LocationIsSet = false;
}
utility::string_t DeviceResource::getMacAddress() const
{
    return m_Mac_address;
}
void DeviceResource::setMacAddress(utility::string_t value)
{
    m_Mac_address = value;
    m_Mac_addressIsSet = true;
}
bool DeviceResource::mac_addressIsSet() const
{
    return m_Mac_addressIsSet;
}
void DeviceResource::unsetMac_address()
{
    m_Mac_addressIsSet = false;
}
utility::string_t DeviceResource::getMake() const
{
    return m_Make;
}
void DeviceResource::setMake(utility::string_t value)
{
    m_Make = value;
    m_MakeIsSet = true;
}
bool DeviceResource::makeIsSet() const
{
    return m_MakeIsSet;
}
void DeviceResource::unsetMake()
{
    m_MakeIsSet = false;
}
utility::string_t DeviceResource::getModel() const
{
    return m_Model;
}
void DeviceResource::setModel(utility::string_t value)
{
    m_Model = value;
    m_ModelIsSet = true;
}
bool DeviceResource::modelIsSet() const
{
    return m_ModelIsSet;
}
void DeviceResource::unsetModel()
{
    m_ModelIsSet = false;
}
utility::string_t DeviceResource::getName() const
{
    return m_Name;
}
void DeviceResource::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool DeviceResource::nameIsSet() const
{
    return m_NameIsSet;
}
void DeviceResource::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t DeviceResource::getOs() const
{
    return m_Os;
}
void DeviceResource::setOs(utility::string_t value)
{
    m_Os = value;
    m_OsIsSet = true;
}
bool DeviceResource::osIsSet() const
{
    return m_OsIsSet;
}
void DeviceResource::unsetOs()
{
    m_OsIsSet = false;
}
utility::string_t DeviceResource::getSerial() const
{
    return m_Serial;
}
void DeviceResource::setSerial(utility::string_t value)
{
    m_Serial = value;
    m_SerialIsSet = true;
}
bool DeviceResource::serialIsSet() const
{
    return m_SerialIsSet;
}
void DeviceResource::unsetSerial()
{
    m_SerialIsSet = false;
}
utility::string_t DeviceResource::getStatus() const
{
    return m_Status;
}
void DeviceResource::setStatus(utility::string_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool DeviceResource::statusIsSet() const
{
    return m_StatusIsSet;
}
void DeviceResource::unsetStatus()
{
    m_StatusIsSet = false;
}
int64_t DeviceResource::getUpdatedDate() const
{
    return m_Updated_date;
}
void DeviceResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool DeviceResource::updated_dateIsSet() const
{
    return m_Updated_dateIsSet;
}
void DeviceResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}
std::shared_ptr<SimpleUserResource> DeviceResource::getUser() const
{
    return m_User;
}
void DeviceResource::setUser(std::shared_ptr<SimpleUserResource> value)
{
    m_User = value;
    m_UserIsSet = true;
}
bool DeviceResource::userIsSet() const
{
    return m_UserIsSet;
}
void DeviceResource::unsetUser()
{
    m_UserIsSet = false;
}

}
}
}
}

