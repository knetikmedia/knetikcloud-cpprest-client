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
 * ActivityEntitlementResource.h
 *
 * 
 */

#ifndef ActivityEntitlementResource_H_
#define ActivityEntitlementResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ActivityEntitlementResource
    : public ModelBase
{
public:
    ActivityEntitlementResource();
    virtual ~ActivityEntitlementResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ActivityEntitlementResource members

    /// <summary>
    /// The ISO3 currency code the price is in, if available
    /// </summary>
    utility::string_t getCurrencyCode() const;
    bool currencyCodeIsSet() const;
    void unsetCurrency_code();
    void setCurrencyCode(utility::string_t value);
    /// <summary>
    /// The id of the entitlement item
    /// </summary>
    int32_t getItemId() const;
        void setItemId(int32_t value);
    /// <summary>
    /// The name of the entitlement item
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);
    /// <summary>
    /// The price of the sku, if available
    /// </summary>
    double getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();
    void setPrice(double value);
    /// <summary>
    /// The sku id, if available. If multiple are available, then first one is returned
    /// </summary>
    utility::string_t getSku() const;
    bool skuIsSet() const;
    void unsetSku();
    void setSku(utility::string_t value);

protected:
    utility::string_t m_Currency_code;
    bool m_Currency_codeIsSet;
    int32_t m_Item_id;
        utility::string_t m_Name;
    bool m_NameIsSet;
    double m_Price;
    bool m_PriceIsSet;
    utility::string_t m_Sku;
    bool m_SkuIsSet;
};

}
}
}
}

#endif /* ActivityEntitlementResource_H_ */
