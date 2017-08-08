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
 * UserItemLogResource.h
 *
 * 
 */

#ifndef UserItemLogResource_H_
#define UserItemLogResource_H_


#include "ModelBase.h"

#include "SimpleReferenceResource«int».h"
#include <cpprest/details/basic_types.h>
#include "SimpleUserResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UserItemLogResource
    : public ModelBase
{
public:
    UserItemLogResource();
    virtual ~UserItemLogResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserItemLogResource members

    /// <summary>
    /// The log entry id
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// Additional information defined by the type
    /// </summary>
    utility::string_t getInfo() const;
    bool infoIsSet() const;
    void unsetInfo();
    void setInfo(utility::string_t value);
    /// <summary>
    /// The item interacted with
    /// </summary>
    std::shared_ptr<SimpleReferenceResource«int»> getItem() const;
    bool itemIsSet() const;
    void unsetItem();
    void setItem(std::shared_ptr<SimpleReferenceResource«int»> value);
    /// <summary>
    /// The date/time this event occurred in seconds since epoch
    /// </summary>
    int64_t getLogDate() const;
    bool logDateIsSet() const;
    void unsetLog_date();
    void setLogDate(int64_t value);
    /// <summary>
    /// The type of event
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);
    /// <summary>
    /// The user making the interaction
    /// </summary>
    std::shared_ptr<SimpleUserResource> getUser() const;
    bool userIsSet() const;
    void unsetUser();
    void setUser(std::shared_ptr<SimpleUserResource> value);
    /// <summary>
    /// The id of the inventory entry this event is related to, if any
    /// </summary>
    int32_t getUserInventory() const;
    bool userInventoryIsSet() const;
    void unsetUser_inventory();
    void setUserInventory(int32_t value);

protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Info;
    bool m_InfoIsSet;
    std::shared_ptr<SimpleReferenceResource«int»> m_Item;
    bool m_ItemIsSet;
    int64_t m_Log_date;
    bool m_Log_dateIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    std::shared_ptr<SimpleUserResource> m_User;
    bool m_UserIsSet;
    int32_t m_User_inventory;
    bool m_User_inventoryIsSet;
};

}
}
}
}

#endif /* UserItemLogResource_H_ */
