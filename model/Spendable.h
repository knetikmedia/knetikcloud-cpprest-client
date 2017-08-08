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
 * Spendable.h
 *
 * 
 */

#ifndef Spendable_H_
#define Spendable_H_


#include "Behavior.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Spendable
    : public Behavior
{
public:
    Spendable();
    virtual ~Spendable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Spendable members

    /// <summary>
    /// The code of the currency
    /// </summary>
    utility::string_t getCurrencyCode() const;
    bool currencyCodeIsSet() const;
    void unsetCurrency_code();
    void setCurrencyCode(utility::string_t value);
    /// <summary>
    /// The spendable value
    /// </summary>
    int32_t getValue() const;
    bool valueIsSet() const;
    void unsetValue();
    void setValue(int32_t value);

protected:
    utility::string_t m_Currency_code;
    bool m_Currency_codeIsSet;
    int32_t m_Value;
    bool m_ValueIsSet;
};

}
}
}
}

#endif /* Spendable_H_ */
