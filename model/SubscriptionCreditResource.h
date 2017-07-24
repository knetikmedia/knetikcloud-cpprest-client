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

/*
 * SubscriptionCreditResource.h
 *
 * 
 */

#ifndef SubscriptionCreditResource_H_
#define SubscriptionCreditResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SubscriptionCreditResource
    : public ModelBase
{
public:
    SubscriptionCreditResource();
    virtual ~SubscriptionCreditResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubscriptionCreditResource members

    /// <summary>
    /// The amount of the credit, negative for debt
    /// </summary>
    double getAmount() const;
        void setAmount(double value);
    /// <summary>
    /// The date this credit was added, unix timestamp in seconds
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The id of the credit record
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// The id of the subscription inventory entry
    /// </summary>
    int32_t getInventoryId() const;
    bool inventoryIdIsSet() const;
    void unsetInventory_id();
    void setInventoryId(int32_t value);
    /// <summary>
    /// The reason for the subscription credit
    /// </summary>
    utility::string_t getReason() const;
        void setReason(utility::string_t value);

protected:
    double m_Amount;
        int64_t m_Created_date;
    bool m_Created_dateIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    int32_t m_Inventory_id;
    bool m_Inventory_idIsSet;
    utility::string_t m_Reason;
    };

}
}
}
}

#endif /* SubscriptionCreditResource_H_ */
