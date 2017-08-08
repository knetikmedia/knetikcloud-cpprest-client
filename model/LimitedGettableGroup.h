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
 * LimitedGettableGroup.h
 *
 * 
 */

#ifndef LimitedGettableGroup_H_
#define LimitedGettableGroup_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  LimitedGettableGroup
    : public ModelBase
{
public:
    LimitedGettableGroup();
    virtual ~LimitedGettableGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LimitedGettableGroup members

    /// <summary>
    /// Whether to get active items only
    /// </summary>
    bool getActiveOnly() const;
        void setActiveOnly(bool value);
    /// <summary>
    /// The name of the group. Multiple items with the same group name will be limited together, leave null to be assigned a random unique name. It is typical that owned_limit and active_only will be the same for all, but this is not enforced and the item being recieved will use its settings.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);
    /// <summary>
    /// The max number of items that can be purchased
    /// </summary>
    int32_t getOwnedLimit() const;
        void setOwnedLimit(int32_t value);

protected:
    bool m_Active_only;
        utility::string_t m_Name;
    bool m_NameIsSet;
    int32_t m_Owned_limit;
    };

}
}
}
}

#endif /* LimitedGettableGroup_H_ */
