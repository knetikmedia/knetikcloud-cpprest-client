/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "UserInventoryResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

UserInventoryResource::UserInventoryResource()
{
    m_Behavior_dataIsSet = false;
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Expires = 0L;
    m_ExpiresIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Invoice_id = 0;
    m_Invoice_idIsSet = false;
    m_Item_id = 0;
    m_Item_idIsSet = false;
    m_Item_name = U("");
    m_Item_nameIsSet = false;
    m_Item_type_hint = U("");
    m_Item_type_hintIsSet = false;
    m_Status = U("");
    m_StatusIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
    m_UserIsSet = false;
}

UserInventoryResource::~UserInventoryResource()
{
}

void UserInventoryResource::validate()
{
    // TODO: implement validation
}

web::json::value UserInventoryResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Behavior_dataIsSet)
    {
        val[U("behavior_data")] = ModelBase::toJson(m_Behavior_data);
    }
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_ExpiresIsSet)
    {
        val[U("expires")] = ModelBase::toJson(m_Expires);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Invoice_idIsSet)
    {
        val[U("invoice_id")] = ModelBase::toJson(m_Invoice_id);
    }
    if(m_Item_idIsSet)
    {
        val[U("item_id")] = ModelBase::toJson(m_Item_id);
    }
    if(m_Item_nameIsSet)
    {
        val[U("item_name")] = ModelBase::toJson(m_Item_name);
    }
    if(m_Item_type_hintIsSet)
    {
        val[U("item_type_hint")] = ModelBase::toJson(m_Item_type_hint);
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

void UserInventoryResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("behavior_data")))
    {
        if(!val[U("behavior_data")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("behavior_data")]);
            setBehaviorData( newItem );
        }
    }
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("expires")))
    {
        setExpires(ModelBase::int64_tFromJson(val[U("expires")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int32_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("invoice_id")))
    {
        setInvoiceId(ModelBase::int32_tFromJson(val[U("invoice_id")]));
    }
    if(val.has_field(U("item_id")))
    {
        setItemId(ModelBase::int32_tFromJson(val[U("item_id")]));
    }
    if(val.has_field(U("item_name")))
    {
        setItemName(ModelBase::stringFromJson(val[U("item_name")]));
    }
    if(val.has_field(U("item_type_hint")))
    {
        setItemTypeHint(ModelBase::stringFromJson(val[U("item_type_hint")]));
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

void UserInventoryResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Behavior_dataIsSet)
    {
        if (m_Behavior_data.get())
        {
            m_Behavior_data->toMultipart(multipart, U("behavior_data."));
        }
        
    }
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_ExpiresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("expires"), m_Expires));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_Invoice_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("invoice_id"), m_Invoice_id));
    }
    if(m_Item_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("item_id"), m_Item_id));
    }
    if(m_Item_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("item_name"), m_Item_name));
        
    }
    if(m_Item_type_hintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("item_type_hint"), m_Item_type_hint));
        
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

void UserInventoryResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("behavior_data")))
    {
        if(multipart->hasContent(U("behavior_data")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("behavior_data."));
            setBehaviorData( newItem );
        }
    }
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("expires")))
    {
        setExpires(ModelBase::int64_tFromHttpContent(multipart->getContent(U("expires"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("invoice_id")))
    {
        setInvoiceId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("invoice_id"))));
    }
    if(multipart->hasContent(U("item_id")))
    {
        setItemId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("item_id"))));
    }
    if(multipart->hasContent(U("item_name")))
    {
        setItemName(ModelBase::stringFromHttpContent(multipart->getContent(U("item_name"))));
    }
    if(multipart->hasContent(U("item_type_hint")))
    {
        setItemTypeHint(ModelBase::stringFromHttpContent(multipart->getContent(U("item_type_hint"))));
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

std::shared_ptr<Object> UserInventoryResource::getBehaviorData() const
{
    return m_Behavior_data;
}


void UserInventoryResource::setBehaviorData(std::shared_ptr<Object> value)
{
    m_Behavior_data = value;
    m_Behavior_dataIsSet = true;
}
bool UserInventoryResource::behaviorDataIsSet() const
{
    return m_Behavior_dataIsSet;
}

void UserInventoryResource::unsetBehavior_data()
{
    m_Behavior_dataIsSet = false;
}

int64_t UserInventoryResource::getCreatedDate() const
{
    return m_Created_date;
}


void UserInventoryResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool UserInventoryResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void UserInventoryResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

int64_t UserInventoryResource::getExpires() const
{
    return m_Expires;
}


void UserInventoryResource::setExpires(int64_t value)
{
    m_Expires = value;
    m_ExpiresIsSet = true;
}
bool UserInventoryResource::expiresIsSet() const
{
    return m_ExpiresIsSet;
}

void UserInventoryResource::unsetExpires()
{
    m_ExpiresIsSet = false;
}

int32_t UserInventoryResource::getId() const
{
    return m_Id;
}


void UserInventoryResource::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool UserInventoryResource::idIsSet() const
{
    return m_IdIsSet;
}

void UserInventoryResource::unsetId()
{
    m_IdIsSet = false;
}

int32_t UserInventoryResource::getInvoiceId() const
{
    return m_Invoice_id;
}


void UserInventoryResource::setInvoiceId(int32_t value)
{
    m_Invoice_id = value;
    m_Invoice_idIsSet = true;
}
bool UserInventoryResource::invoiceIdIsSet() const
{
    return m_Invoice_idIsSet;
}

void UserInventoryResource::unsetInvoice_id()
{
    m_Invoice_idIsSet = false;
}

int32_t UserInventoryResource::getItemId() const
{
    return m_Item_id;
}


void UserInventoryResource::setItemId(int32_t value)
{
    m_Item_id = value;
    m_Item_idIsSet = true;
}
bool UserInventoryResource::itemIdIsSet() const
{
    return m_Item_idIsSet;
}

void UserInventoryResource::unsetItem_id()
{
    m_Item_idIsSet = false;
}

utility::string_t UserInventoryResource::getItemName() const
{
    return m_Item_name;
}


void UserInventoryResource::setItemName(utility::string_t value)
{
    m_Item_name = value;
    m_Item_nameIsSet = true;
}
bool UserInventoryResource::itemNameIsSet() const
{
    return m_Item_nameIsSet;
}

void UserInventoryResource::unsetItem_name()
{
    m_Item_nameIsSet = false;
}

utility::string_t UserInventoryResource::getItemTypeHint() const
{
    return m_Item_type_hint;
}


void UserInventoryResource::setItemTypeHint(utility::string_t value)
{
    m_Item_type_hint = value;
    m_Item_type_hintIsSet = true;
}
bool UserInventoryResource::itemTypeHintIsSet() const
{
    return m_Item_type_hintIsSet;
}

void UserInventoryResource::unsetItem_type_hint()
{
    m_Item_type_hintIsSet = false;
}

utility::string_t UserInventoryResource::getStatus() const
{
    return m_Status;
}


void UserInventoryResource::setStatus(utility::string_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool UserInventoryResource::statusIsSet() const
{
    return m_StatusIsSet;
}

void UserInventoryResource::unsetStatus()
{
    m_StatusIsSet = false;
}

int64_t UserInventoryResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void UserInventoryResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool UserInventoryResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void UserInventoryResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

std::shared_ptr<SimpleUserResource> UserInventoryResource::getUser() const
{
    return m_User;
}


void UserInventoryResource::setUser(std::shared_ptr<SimpleUserResource> value)
{
    m_User = value;
    m_UserIsSet = true;
}
bool UserInventoryResource::userIsSet() const
{
    return m_UserIsSet;
}

void UserInventoryResource::unsetUser()
{
    m_UserIsSet = false;
}

}
}
}
}

