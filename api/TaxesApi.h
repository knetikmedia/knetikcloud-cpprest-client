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
 * TaxesApi.h
 *
 * 
 */

#ifndef TaxesApi_H_
#define TaxesApi_H_


#include "ApiClient.h"

#include "CountryTaxResource.h"
#include "PageResource«CountryTaxResource».h"
#include "PageResource«StateTaxResource».h"
#include "Result.h"
#include "StateTaxResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  TaxesApi
{
public:
    TaxesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~TaxesApi();
    /// <summary>
    /// Create a country tax
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TAX_ADMIN
    /// </remarks>
    /// <param name="taxResource">The tax object (optional)</param>
    pplx::task<std::shared_ptr<CountryTaxResource>> createCountryTax(std::shared_ptr<CountryTaxResource> taxResource);
    /// <summary>
    /// Create a state tax
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TAX_ADMIN
    /// </remarks>
    /// <param name="countryCodeIso3">The iso3 code of the country</param>/// <param name="taxResource">The tax object (optional)</param>
    pplx::task<std::shared_ptr<StateTaxResource>> createStateTax(utility::string_t countryCodeIso3, std::shared_ptr<StateTaxResource> taxResource);
    /// <summary>
    /// Delete an existing tax
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TAX_ADMIN
    /// </remarks>
    /// <param name="countryCodeIso3">The iso3 code of the country</param>
    pplx::task<void> deleteCountryTax(utility::string_t countryCodeIso3);
    /// <summary>
    /// Delete an existing state tax
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TAX_ADMIN
    /// </remarks>
    /// <param name="countryCodeIso3">The iso3 code of the country</param>/// <param name="stateCode">The code of the state</param>
    pplx::task<void> deleteStateTax(utility::string_t countryCodeIso3, utility::string_t stateCode);
    /// <summary>
    /// Get a single tax
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="countryCodeIso3">The iso3 code of the country</param>
    pplx::task<std::shared_ptr<CountryTaxResource>> getCountryTax(utility::string_t countryCodeIso3);
    /// <summary>
    /// List and search taxes
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TAX_ADMIN
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to name:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«CountryTaxResource»>> getCountryTaxes(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get a single state tax
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="countryCodeIso3">The iso3 code of the country</param>/// <param name="stateCode">The code of the state</param>
    pplx::task<std::shared_ptr<StateTaxResource>> getStateTax(utility::string_t countryCodeIso3, utility::string_t stateCode);
    /// <summary>
    /// List and search taxes across all countries
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)</param>
    pplx::task<std::shared_ptr<PageResource«StateTaxResource»>> getStateTaxesForCountries(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// List and search taxes within a country
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="countryCodeIso3">The iso3 code of the country</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)</param>
    pplx::task<std::shared_ptr<PageResource«StateTaxResource»>> getStateTaxesForCountry(utility::string_t countryCodeIso3, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Create or update a tax
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TAX_ADMIN
    /// </remarks>
    /// <param name="countryCodeIso3">The iso3 code of the country</param>/// <param name="taxResource">The tax object (optional)</param>
    pplx::task<std::shared_ptr<CountryTaxResource>> updateCountryTax(utility::string_t countryCodeIso3, std::shared_ptr<CountryTaxResource> taxResource);
    /// <summary>
    /// Create or update a state tax
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TAX_ADMIN
    /// </remarks>
    /// <param name="countryCodeIso3">The iso3 code of the country</param>/// <param name="stateCode">The code of the state</param>/// <param name="taxResource">The tax object (optional)</param>
    pplx::task<std::shared_ptr<StateTaxResource>> updateStateTax(utility::string_t countryCodeIso3, utility::string_t stateCode, std::shared_ptr<StateTaxResource> taxResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* TaxesApi_H_ */

