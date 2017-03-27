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
 * CurrenciesApi.h
 *
 * 
 */

#ifndef CurrenciesApi_H_
#define CurrenciesApi_H_


#include "ApiClient.h"

#include "CurrencyResource.h"
#include "PageResource«CurrencyResource».h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  CurrenciesApi
{
public:
    CurrenciesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~CurrenciesApi();
    /// <summary>
    /// Create a currency
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="currency">The currency object (optional)</param>
    pplx::task<std::shared_ptr<CurrencyResource>> createCurrency(std::shared_ptr<CurrencyResource> currency);
    /// <summary>
    /// Delete a currency
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="code">The currency code</param>
    pplx::task<void> deleteCurrency(utility::string_t code);
    /// <summary>
    /// List and search currencies
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterEnabledCurrencies">Filter for alternate currencies setup explicitely in system config (optional)</param>/// <param name="filterType">Filter currencies by type.  Allowable values: (&#39;virtual&#39;, &#39;real&#39;) (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to name:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«CurrencyResource»>> getCurrencies(bool filterEnabledCurrencies, utility::string_t filterType, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get a single currency
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="code">The currency code</param>
    pplx::task<std::shared_ptr<CurrencyResource>> getCurrency(utility::string_t code);
    /// <summary>
    /// Update a currency
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="code">The currency code</param>/// <param name="currency">The currency object (optional)</param>
    pplx::task<void> updateCurrency(utility::string_t code, std::shared_ptr<CurrencyResource> currency);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* CurrenciesApi_H_ */

