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
 * AddressResource.h
 *
 * 
 */

#ifndef AddressResource_H_
#define AddressResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  AddressResource
    : public ModelBase
{
public:
    AddressResource();
    virtual ~AddressResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AddressResource members

    /// <summary>
    /// The first line of the address
    /// </summary>
    utility::string_t getAddress1() const;
        void setAddress1(utility::string_t value);
    /// <summary>
    /// A second line of the address
    /// </summary>
    utility::string_t getAddress2() const;
    bool address2IsSet() const;
    void unsetAddress2();
    void setAddress2(utility::string_t value);
    /// <summary>
    /// The city
    /// </summary>
    utility::string_t getCity() const;
        void setCity(utility::string_t value);
    /// <summary>
    /// The iso3 code for the country
    /// </summary>
    utility::string_t getCountryCode() const;
        void setCountryCode(utility::string_t value);
    /// <summary>
    /// The postal code
    /// </summary>
    utility::string_t getPostalCode() const;
    bool postalCodeIsSet() const;
    void unsetPostal_code();
    void setPostalCode(utility::string_t value);
    /// <summary>
    /// The code for the state. Required if the country has states/provinces/equivalent
    /// </summary>
    utility::string_t getStateCode() const;
    bool stateCodeIsSet() const;
    void unsetState_code();
    void setStateCode(utility::string_t value);

protected:
    utility::string_t m_Address1;
        utility::string_t m_Address2;
    bool m_Address2IsSet;
    utility::string_t m_City;
        utility::string_t m_Country_code;
        utility::string_t m_Postal_code;
    bool m_Postal_codeIsSet;
    utility::string_t m_State_code;
    bool m_State_codeIsSet;
};

}
}
}
}

#endif /* AddressResource_H_ */