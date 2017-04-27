/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Discount.h
 *
 * 
 */

#ifndef Discount_H_
#define Discount_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Discount
    : public ModelBase
{
public:
    Discount();
    virtual ~Discount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Discount members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSku() const;
    void setSku(utility::string_t value);
    bool skuIsSet() const;
    void unsetSku();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUniqueKey() const;
    void setUniqueKey(utility::string_t value);
    bool unique_keyIsSet() const;
    void unsetUnique_key();
    /// <summary>
    /// 
    /// </summary>
    double getValue() const;
    void setValue(double value);
    bool valueIsSet() const;
    void unsetValue();

protected:
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
utility::string_t m_Name;
    bool m_NameIsSet;
utility::string_t m_Sku;
    bool m_SkuIsSet;
utility::string_t m_Unique_key;
    bool m_Unique_keyIsSet;
double m_Value;
    bool m_ValueIsSet;
};

}
}
}
}

#endif /* Discount_H_ */
