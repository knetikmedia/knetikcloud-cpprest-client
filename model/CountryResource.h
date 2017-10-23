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
 * CountryResource.h
 *
 * 
 */

#ifndef CountryResource_H_
#define CountryResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CountryResource
    : public ModelBase
{
public:
    CountryResource();
    virtual ~CountryResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CountryResource members

    /// <summary>
    /// The iso2 of the country
    /// </summary>
    utility::string_t getIso2() const;
    bool iso2IsSet() const;
    void unsetIso2();
    void setIso2(utility::string_t value);
    /// <summary>
    /// The iso3 of the country
    /// </summary>
    utility::string_t getIso3() const;
    bool iso3IsSet() const;
    void unsetIso3();
    void setIso3(utility::string_t value);
    /// <summary>
    /// The name of the country resource
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);

protected:
    utility::string_t m_Iso2;
    bool m_Iso2IsSet;
    utility::string_t m_Iso3;
    bool m_Iso3IsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
};

}
}
}
}

#endif /* CountryResource_H_ */
