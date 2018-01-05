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
 * BundleItem.h
 *
 * 
 */

#ifndef BundleItem_H_
#define BundleItem_H_


#include "StoreItem.h"
#include "BundledSku.h"
#include "Behavior.h"
#include "Sku.h"
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>
#include "Property.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BundleItem
    : public StoreItem
{
public:
    BundleItem();
    virtual ~BundleItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BundleItem members

    /// <summary>
    /// The skus of items to be included in this bundle, and how they influence the bundle total price.  Must have at least one SKU
    /// </summary>
    std::vector<std::shared_ptr<BundledSku>>& getBundledSkus();
        void setBundledSkus(std::vector<std::shared_ptr<BundledSku>> value);

protected:
    std::vector<std::shared_ptr<BundledSku>> m_Bundled_skus;
    };

}
}
}
}

#endif /* BundleItem_H_ */