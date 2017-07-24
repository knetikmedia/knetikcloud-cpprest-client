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
 * CartItemRequest.h
 *
 * 
 */

#ifndef CartItemRequest_H_
#define CartItemRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CartItemRequest
    : public ModelBase
{
public:
    CartItemRequest();
    virtual ~CartItemRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CartItemRequest members

    /// <summary>
    /// The affiliate key of the item
    /// </summary>
    utility::string_t getAffiliateKey() const;
    bool affiliateKeyIsSet() const;
    void unsetAffiliate_key();
    void setAffiliateKey(utility::string_t value);
    /// <summary>
    /// The catalog SKU of the item
    /// </summary>
    utility::string_t getCatalogSku() const;
        void setCatalogSku(utility::string_t value);
    /// <summary>
    /// Allows to override the price of an item, if the behavior configuration permits it
    /// </summary>
    double getPriceOverride() const;
        void setPriceOverride(double value);
    /// <summary>
    /// The quantity of the item
    /// </summary>
    int32_t getQuantity() const;
        void setQuantity(int32_t value);

protected:
    utility::string_t m_Affiliate_key;
    bool m_Affiliate_keyIsSet;
    utility::string_t m_Catalog_sku;
        double m_Price_override;
        int32_t m_Quantity;
    };

}
}
}
}

#endif /* CartItemRequest_H_ */
