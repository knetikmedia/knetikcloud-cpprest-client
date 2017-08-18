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
 * RewardSetResource.h
 *
 * 
 */

#ifndef RewardSetResource_H_
#define RewardSetResource_H_


#include "ModelBase.h"

#include "RewardCurrencyResource.h"
#include <cpprest/details/basic_types.h>
#include "RewardItemResource.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  RewardSetResource
    : public ModelBase
{
public:
    RewardSetResource();
    virtual ~RewardSetResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RewardSetResource members

    /// <summary>
    /// The date/time this resource was created in seconds since unix epoch
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The currency to give as rewards
    /// </summary>
    std::vector<std::shared_ptr<RewardCurrencyResource>>& getCurrencyRewards();
    bool currencyRewardsIsSet() const;
    void unsetCurrency_rewards();
    void setCurrencyRewards(std::vector<std::shared_ptr<RewardCurrencyResource>> value);
    /// <summary>
    /// The assigned unique ID for this reward set
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// The items to give as rewards
    /// </summary>
    std::vector<std::shared_ptr<RewardItemResource>>& getItemRewards();
    bool itemRewardsIsSet() const;
    void unsetItem_rewards();
    void setItemRewards(std::vector<std::shared_ptr<RewardItemResource>> value);
    /// <summary>
    /// A longer describe the reward set, usually included in details
    /// </summary>
    utility::string_t getLongDescription() const;
    bool longDescriptionIsSet() const;
    void unsetLong_description();
    void setLongDescription(utility::string_t value);
    /// <summary>
    /// The maximum placing that will receive a reward
    /// </summary>
    int32_t getMaxPlacing() const;
    bool maxPlacingIsSet() const;
    void unsetMax_placing();
    void setMaxPlacing(int32_t value);
    /// <summary>
    /// The user friendly name for this reward set
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// A short paragraph to describe the reward set, usually included in listings.  Max 255 characters
    /// </summary>
    utility::string_t getShortDescription() const;
    bool shortDescriptionIsSet() const;
    void unsetShort_description();
    void setShortDescription(utility::string_t value);
    /// <summary>
    /// A provided unique key for this reward set
    /// </summary>
    utility::string_t getUniqueKey() const;
    bool uniqueKeyIsSet() const;
    void unsetUnique_key();
    void setUniqueKey(utility::string_t value);
    /// <summary>
    /// The date/time this resource was last updated in seconds since unix epoch
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);

protected:
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
    std::vector<std::shared_ptr<RewardCurrencyResource>> m_Currency_rewards;
    bool m_Currency_rewardsIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    std::vector<std::shared_ptr<RewardItemResource>> m_Item_rewards;
    bool m_Item_rewardsIsSet;
    utility::string_t m_Long_description;
    bool m_Long_descriptionIsSet;
    int32_t m_Max_placing;
    bool m_Max_placingIsSet;
    utility::string_t m_Name;
        utility::string_t m_Short_description;
    bool m_Short_descriptionIsSet;
    utility::string_t m_Unique_key;
    bool m_Unique_keyIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* RewardSetResource_H_ */