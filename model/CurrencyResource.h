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
 * CurrencyResource.h
 *
 * 
 */

#ifndef CurrencyResource_H_
#define CurrencyResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CurrencyResource
    : public ModelBase
{
public:
    CurrencyResource();
    virtual ~CurrencyResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CurrencyResource members

    /// <summary>
    /// Whether the currency is active. Default true
    /// </summary>
    bool getActive() const;
    bool activeIsSet() const;
    void unsetActive();
    void setActive(bool value);
    /// <summary>
    /// The unique id code for the currency. Maximum 5 characters
    /// </summary>
    utility::string_t getCode() const;
        void setCode(utility::string_t value);
    /// <summary>
    /// The unix timestamp in seconds the currency was added to the system
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The decimal to multiply the system base currency (from config &#39;currency&#39;) to localize to this one. Should be 1 for the base currency itself.
    /// </summary>
    double getFactor() const;
        void setFactor(double value);
    /// <summary>
    /// The url for an icon of the currency
    /// </summary>
    utility::string_t getIcon() const;
    bool iconIsSet() const;
    void unsetIcon();
    void setIcon(utility::string_t value);
    /// <summary>
    /// The name of the currency
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// The type of currency. Default &#39;real&#39;
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);
    /// <summary>
    /// The unix timestamp in seconds the currency was last updated in the system.
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);

protected:
    bool m_Active;
    bool m_ActiveIsSet;
    utility::string_t m_Code;
        int64_t m_Created_date;
    bool m_Created_dateIsSet;
    double m_Factor;
        utility::string_t m_Icon;
    bool m_IconIsSet;
    utility::string_t m_Name;
        utility::string_t m_Type;
    bool m_TypeIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* CurrencyResource_H_ */
