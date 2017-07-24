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
 * StoreShoppingCartsApi.h
 *
 * 
 */

#ifndef StoreShoppingCartsApi_H_
#define StoreShoppingCartsApi_H_


#include "ApiClient.h"

#include "Cart.h"
#include "CartItemRequest.h"
#include "CartShippableResponse.h"
#include "CartShippingAddressRequest.h"
#include "CouponDefinition.h"
#include "PageResource«CartSummary».h"
#include "Result.h"
#include "SampleCountriesResponse.h"
#include "SkuRequest.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  StoreShoppingCartsApi
{
public:
    StoreShoppingCartsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~StoreShoppingCartsApi();
    /// <summary>
    /// Adds a custom discount to the cart
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the cart</param>/// <param name="customDiscount">The details of the discount to add (optional)</param>
    pplx::task<void> addCustomDiscount(utility::string_t id, std::shared_ptr<CouponDefinition> customDiscount);
    /// <summary>
    /// Adds a discount coupon to the cart
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the cart</param>/// <param name="skuRequest">The request of the sku (optional)</param>
    pplx::task<void> addDiscountToCart(utility::string_t id, std::shared_ptr<SkuRequest> skuRequest);
    /// <summary>
    /// Add an item to the cart
    /// </summary>
    /// <remarks>
    /// Currently, carts cannot contain virtual and real currency items at the same time. Furthermore, the API only support a single virtual item at the moment
    /// </remarks>
    /// <param name="id">The id of the cart</param>/// <param name="cartItemRequest">The cart item request object (optional)</param>
    pplx::task<void> addItemToCart(utility::string_t id, std::shared_ptr<CartItemRequest> cartItemRequest);
    /// <summary>
    /// Create a cart
    /// </summary>
    /// <remarks>
    /// You don&#39;t have to have a user to create a cart but the API requires authentication to checkout
    /// </remarks>
    /// <param name="owner">Set the owner of a cart. If not specified, defaults to the calling user&#39;s id. If specified and is not the calling user&#39;s id, SHOPPING_CARTS_ADMIN permission is required (optional)</param>/// <param name="currencyCode">Set the currency for the cart, by currency code. May be disallowed by site settings. (optional)</param>
    pplx::task<utility::string_t> createCart(int32_t owner, utility::string_t currencyCode);
    /// <summary>
    /// Returns the cart with the given GUID
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the cart</param>
    pplx::task<std::shared_ptr<Cart>> getCart(utility::string_t id);
    /// <summary>
    /// Get a list of carts
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterOwnerId">Filter by the id of the owner (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«CartSummary»>> getCarts(int32_t filterOwnerId, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Returns whether a cart requires shipping
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the cart</param>
    pplx::task<std::shared_ptr<CartShippableResponse>> getShippable(utility::string_t id);
    /// <summary>
    /// Get the list of available shipping countries per vendor
    /// </summary>
    /// <remarks>
    /// Since a cart can have multiple vendors with different shipping options, the countries are broken down by vendors. Please see notes about the response object as the fields are variable.
    /// </remarks>
    /// <param name="id">The id of the cart</param>
    pplx::task<std::shared_ptr<SampleCountriesResponse>> getShippingCountries(utility::string_t id);
    /// <summary>
    /// Removes a discount coupon from the cart
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the cart</param>/// <param name="code">The SKU code of the coupon to remove</param>
    pplx::task<void> removeDiscountFromCart(utility::string_t id, utility::string_t code);
    /// <summary>
    /// Sets the currency to use for the cart
    /// </summary>
    /// <remarks>
    /// May be disallowed by site settings.
    /// </remarks>
    /// <param name="id">The id of the cart</param>/// <param name="currencyCode">The code of the currency (optional)</param>
    pplx::task<void> setCartCurrency(utility::string_t id, utility::string_t currencyCode);
    /// <summary>
    /// Sets the owner of a cart if none is set already
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the cart</param>/// <param name="userId">The id of the user (optional)</param>
    pplx::task<void> setCartOwner(utility::string_t id, int32_t userId);
    /// <summary>
    /// Changes the quantity of an item already in the cart
    /// </summary>
    /// <remarks>
    /// A quantity of zero will remove the item from the cart altogether.
    /// </remarks>
    /// <param name="id">The id of the cart</param>/// <param name="cartItemRequest">The cart item request object (optional)</param>
    pplx::task<void> updateItemInCart(utility::string_t id, std::shared_ptr<CartItemRequest> cartItemRequest);
    /// <summary>
    /// Modifies or sets the order shipping address
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the cart</param>/// <param name="cartShippingAddressRequest">The cart shipping address request object (optional)</param>
    pplx::task<void> updateShippingAddress(utility::string_t id, std::shared_ptr<CartShippingAddressRequest> cartShippingAddressRequest);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* StoreShoppingCartsApi_H_ */

