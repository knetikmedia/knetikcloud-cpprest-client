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
 * UserInventoryResource.h
 *
 * 
 */

#ifndef UserInventoryResource_H_
#define UserInventoryResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "SimpleUserResource.h"
#include "Object.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UserInventoryResource
    : public ModelBase
{
public:
    UserInventoryResource();
    virtual ~UserInventoryResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserInventoryResource members

    /// <summary>
    /// A map of data for behaviors
    /// </summary>
    std::shared_ptr<Object> getBehaviorData() const;
    bool behaviorDataIsSet() const;
    void unsetBehavior_data();
    void setBehaviorData(std::shared_ptr<Object> value);
    /// <summary>
    /// The date/time this resource was created in seconds since epoch
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The date/time this resource exires in seconds since epoch. Null for no expiration. For subscriptions, this is the end of the &#39;grace period&#39; if left unpaid
    /// </summary>
    int64_t getExpires() const;
    bool expiresIsSet() const;
    void unsetExpires();
    void setExpires(int64_t value);
    /// <summary>
    /// The id of the inventory
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// The id of the invoice that resulted in this inventory, if any
    /// </summary>
    int32_t getInvoiceId() const;
    bool invoiceIdIsSet() const;
    void unsetInvoice_id();
    void setInvoiceId(int32_t value);
    /// <summary>
    /// The id of the item
    /// </summary>
    int32_t getItemId() const;
    bool itemIdIsSet() const;
    void unsetItem_id();
    void setItemId(int32_t value);
    /// <summary>
    /// The name of the item
    /// </summary>
    utility::string_t getItemName() const;
    bool itemNameIsSet() const;
    void unsetItem_name();
    void setItemName(utility::string_t value);
    /// <summary>
    /// The type hint of the item
    /// </summary>
    utility::string_t getItemTypeHint() const;
    bool itemTypeHintIsSet() const;
    void unsetItem_type_hint();
    void setItemTypeHint(utility::string_t value);
    /// <summary>
    /// The status of the inventory. Pending inventory is not yet ready for use. Inactive inventory has expired or been used up
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(utility::string_t value);
    /// <summary>
    /// The date/time this resource was last updated in seconds since epoch
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);
    /// <summary>
    /// The id of the user this inventory belongs to
    /// </summary>
    std::shared_ptr<SimpleUserResource> getUser() const;
    bool userIsSet() const;
    void unsetUser();
    void setUser(std::shared_ptr<SimpleUserResource> value);

protected:
    std::shared_ptr<Object> m_Behavior_data;
    bool m_Behavior_dataIsSet;
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
    int64_t m_Expires;
    bool m_ExpiresIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    int32_t m_Invoice_id;
    bool m_Invoice_idIsSet;
    int32_t m_Item_id;
    bool m_Item_idIsSet;
    utility::string_t m_Item_name;
    bool m_Item_nameIsSet;
    utility::string_t m_Item_type_hint;
    bool m_Item_type_hintIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
    std::shared_ptr<SimpleUserResource> m_User;
    bool m_UserIsSet;
};

}
}
}
}

#endif /* UserInventoryResource_H_ */