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
 * BundledSku.h
 *
 * 
 */

#ifndef BundledSku_H_
#define BundledSku_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BundledSku
    : public ModelBase
{
public:
    BundledSku();
    virtual ~BundledSku();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BundledSku members

    /// <summary>
    /// The amount this item will cost inside the bundle instead of its regular price
    /// </summary>
    double getPriceOverride() const;
    void setPriceOverride(double value);
    bool price_overrideIsSet() const;
    void unsetPrice_override();
    /// <summary>
    /// The quantity of this item within the bundle
    /// </summary>
    int32_t getQuantity() const;
    void setQuantity(int32_t value);
        /// <summary>
    /// The stock keeping unit (SKU) for an item included in the bundle
    /// </summary>
    utility::string_t getSku() const;
    void setSku(utility::string_t value);
    
protected:
    double m_Price_override;
    bool m_Price_overrideIsSet;
int32_t m_Quantity;
    utility::string_t m_Sku;
    };

}
}
}
}

#endif /* BundledSku_H_ */
