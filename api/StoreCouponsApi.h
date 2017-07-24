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
 * StoreCouponsApi.h
 *
 * 
 */

#ifndef StoreCouponsApi_H_
#define StoreCouponsApi_H_


#include "ApiClient.h"

#include "CouponItem.h"
#include "ItemTemplateResource.h"
#include "PageResource«ItemTemplateResource».h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  StoreCouponsApi
{
public:
    StoreCouponsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~StoreCouponsApi();
    /// <summary>
    /// Create a coupon item
    /// </summary>
    /// <remarks>
    /// SKUs have to be unique in the entire store.
    /// </remarks>
    /// <param name="cascade">Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional, default to false)</param>/// <param name="couponItem">The coupon item object (optional)</param>
    pplx::task<std::shared_ptr<CouponItem>> createCouponItem(bool cascade, std::shared_ptr<CouponItem> couponItem);
    /// <summary>
    /// Create a coupon template
    /// </summary>
    /// <remarks>
    /// Coupon Templates define a type of coupon and the properties they have.
    /// </remarks>
    /// <param name="couponTemplateResource">The new coupon template (optional)</param>
    pplx::task<std::shared_ptr<ItemTemplateResource>> createCouponTemplate(std::shared_ptr<ItemTemplateResource> couponTemplateResource);
    /// <summary>
    /// Delete a coupon item
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the coupon</param>
    pplx::task<void> deleteCouponItem(int32_t id);
    /// <summary>
    /// Delete a coupon template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">force deleting the template if it&#39;s attached to other objects, cascade &#x3D; detach (optional)</param>
    pplx::task<void> deleteCouponTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Get a single coupon item
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the coupon</param>
    pplx::task<std::shared_ptr<CouponItem>> getCouponItem(int32_t id);
    /// <summary>
    /// Get a single coupon template
    /// </summary>
    /// <remarks>
    /// Coupon Templates define a type of coupon and the properties they have.
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<ItemTemplateResource>> getCouponTemplate(utility::string_t id);
    /// <summary>
    /// List and search coupon templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«ItemTemplateResource»>> getCouponTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Update a coupon item
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the coupon</param>/// <param name="cascade">Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional, default to false)</param>/// <param name="couponItem">The coupon item object (optional)</param>
    pplx::task<std::shared_ptr<CouponItem>> updateCouponItem(int32_t id, bool cascade, std::shared_ptr<CouponItem> couponItem);
    /// <summary>
    /// Update a coupon template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="couponTemplateResource">The coupon template resource object (optional)</param>
    pplx::task<std::shared_ptr<ItemTemplateResource>> updateCouponTemplate(utility::string_t id, std::shared_ptr<ItemTemplateResource> couponTemplateResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* StoreCouponsApi_H_ */

